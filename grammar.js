/**
 * @file Tree-sitter based parser for Lua patterns
 * @author MD. Mouinul Hossain <mdmouinulhossainshawon@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "lua_patterns",

  // TODO: Check if this is
  // necessary.
  extras: _ => [/\r?\n/],

  rules: {
    // (source_file) can contain,
    // - Literal characters(e.g. A, B, C).
    // - Character classes(e.g. %s, [a-z]).
    // - Escaped characters(e.g. %%).
    // - Capture groups(e.g. (.+)).
    // - . (Any character)
    pattern: $ => seq(
      optional($.start_assertion),
      repeat(
        choice(
          $.literal_character,
          $.character_class,
          $.escaped_character,
          $.capture_group,
          $.any_character
        ),
      ),
      optional($.end_assertion),
    ),


    // Symbol to start matching
    // from the start.
    // E.g. ^Nvim
    start_assertion: _ => "^",
    // Symbol to start matching
    // to the end.
    // E.g. %d+$
    end_assertion: _ => "$",


    // Zero or more repeats, .*
    zero_or_more: _ => /\*/,
    // One or more repeats, .+
    one_or_more: _ => /\+/,
    // Non-greedy repeats, .-
    lazy: _ => /-/,
    // Zero or one repeat, .?
    optional: _ => /\?/,


    // Any non magic character,
    // Magic: ( ) . % + - * ? [ ] ^ $
    // 
    // TODO, Check if ] should be magic.
    // 
    // They should *optionally* support
    // quantifiers.
    literal_character: $ => seq(
      /[^\^\$\+\*\-\?\(\)\[\]\.]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    ),

    // Normal characters inside a (character_class).
    class_character: _ => /[^\%\-%]/,

    // . + (optional) quantifiers.
    any_character: $ => seq(
      ".",
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    ),

    // Predefined character classes. See the table in
    // https://www.lua.org/pil/20.2.html
    predefined_class: $ => seq(
      "%",
      /[acdlpsuwxzACDLPSUWXZ]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    ),

    // Character set, 0-9
    character_set: $ => seq(
      $.class_character,
      "-",
      $.class_character,
    ),
    escaped_character: $ => seq(
      "%",
      /[^acdlpsuwxzACDLPSUWXZ]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    ),


    // Character class. Either,
    // - %s
    // - [0-9], This can contain,
    //   - Character sets, 0-9.
    //   - Predefined class, %d.
    //   - Normal character.
    //   - Escapes, %%.
    //   - Non-magic characters.
    //
    // They should *optionally* support
    // quantifiers.
    character_class: $ => choice(
      $.predefined_class,
      seq(
        "[",
        optional("^"),
        repeat1(
          choice(
            $.character_set,
            $.predefined_class,
            $.class_character,
            $.escaped_character,
            $.any_character
          )
        ),
        "]",
        optional(
          choice(
            $.zero_or_more,
            $.one_or_more,
            $.lazy,

            $.optional
          )
        )
      )
    ),

    // Capture group, e.g. (Hl%_[0-9]*)
    // @see `character_class`
    capture_group: $ => seq(
      "(",
      repeat1(
        choice(
          $.character_class,
          $.escaped_character,
          $.literal_character,
          $.any_character
        )
      ),
      ")"
    ),
  }
});

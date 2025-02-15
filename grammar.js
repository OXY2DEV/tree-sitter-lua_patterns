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
          $.escape_sequence,
          $.literal_character,
          $.character_class,
          $.character_set,
          $.escaped_character,
          $.capture_group,
          $.any_character,

          // Monkey-patch the issue
          prec(-1, alias(
            choice(
              $.zero_or_more,
              $.one_or_more,
              $.lazy,

              $.optional
            ), $.literal_character
          ))
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


    // One or more non magic character,
    // Magic: ( ) . % + - * ? [ ] ^ $
    // 
    // TODO: Find a way to properly parse
    // characters.
    literal_character: $ => prec.right(seq(
      /[^\^\$\+\*\-\?\(\)\[\]\.]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    )),

    // . + (optional) quantifiers.
    any_character: $ => prec.right(seq(
      ".",
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    )),

    // Predefined character classes. See the table in
    // https://www.lua.org/pil/20.2.html
    character_class: $ => prec.right(seq(
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
    )),

    // Character set, 0-9
    character_range: $ => seq(
      alias($.set_character, $.literal_character),
      "-",
      alias($.set_character, $.literal_character),
    ),

    escaped_character: $ => prec.right(seq(
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
    )),

    escape_sequence: $ => prec.right(seq(
      /\\[bfntvr0'"\\]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    )),

    set_sequence: _ => /\\[bfntvr0'"\\]/,

    set_class: _ => seq(
      "%",
      /[acdlpsuwxzACDLPSUWXZ]/
    ),
    set_character: _ => /[^\^\$\+\*\-\?\(\)\[\]\.]/,
    set_escaped: _ => seq(
      "%",
      /[^acdlpsuwxzACDLPSUWXZ]/
    ),
    set_any: _ => ".",

    // Text inside of [].
    character_set_content: $ => repeat1(
      choice(
        $.character_range,

        alias($.set_sequence, $.escape_sequence),
        alias($.set_class, $.character_class),
        alias($.set_character, $.literal_character),
        alias($.set_escaped, $.escaped_character),
        alias($.set_any, $.any_character)
      )
    ),

    // Character set. Either,
    // - %s
    // - [0-9abc%s], This can contain,
    //   - Character range, 0-9.
    //   - Predefined class, %d.
    //   - Normal character.
    //   - Escapes, %%.
    //   - Non-magic characters.
    //
    // They should *optionally* support
    // quantifiers.
    character_set: $ => prec.right(seq(
      "[",
      optional("^"),
      $.character_set_content,
      "]",
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    )),

    // Capture group, e.g. (Hl%_[0-9]*)
    // @see `character_set`
    capture_group: $ => seq(
      "(",
      repeat1(
        choice(
          $.character_set,

          alias($.set_sequence, $.escape_sequence),
          alias($.set_class, $.character_class),
          alias($.set_character, $.literal_character),
          alias($.set_escaped, $.escaped_character),
          alias($.set_any, $.any_character)
        )
      ),
      ")"
    ),
  }
});

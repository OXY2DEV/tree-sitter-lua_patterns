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
          $.character_reference,
          alias($.literal_quantifers, $.literal_character),

          // Ignore `[]` and `()`
          prec(-1, /\[\]/),
          prec(-1, /\(\)/)
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
    // Magic: ( . [
    // 
    // NOTE, Most magic characters act
    // like normal text so we should treat
    // as such.
    // Use precedence to reduce false
    // positives.
    literal_character: $ => prec(-1, seq(
      /[^\(\[\.\+\-\?\*]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    )),

    character_reference: $ => seq(
      /\\x[a-fA-F0-9]{2}/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    ),

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

    literal_quantifers: $ => prec(-2, seq(
      /[\+\-\*\?]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional,
        )
      )
    )),

    // Predefined character classes. See the table in
    // https://www.lua.org/pil/20.2.html
    character_class: $ => seq(
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
    character_range: $ => prec(5, seq(
      choice(
        $.character_reference,
        alias($.set_character, $.literal_character),
      ),
      "-",
      choice(
        $.character_reference,
        alias($.set_character, $.literal_character),
      ),
    )),

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

    escape_sequence: $ => seq(
      /\\[bfntvr0'"\\]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,
          $.lazy,

          $.optional
        )
      )
    ),

    set_sequence: _ => /\\[bfntvr0'"\\]/,

    set_class: _ => seq(
      "%",
      /[acdlpsuwxzACDLPSUWXZ]/
    ),
    set_character: _ => /[^\]]/,
    set_escaped: _ => seq(
      "%",
      /[^acdlpsuwxzACDLPSUWXZ\[\]]/
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
        alias($.set_any, $.any_character),
        $.character_reference,
        alias($.literal_quantifers, $.literal_character),
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
    character_set: $ => seq(
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
    ),

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
          alias($.set_any, $.any_character),
          $.character_reference,
          alias($.literal_quantifers, $.literal_character),
        )
      ),
      ")"
    ),
  }
});

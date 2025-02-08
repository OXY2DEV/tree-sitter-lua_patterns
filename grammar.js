/**
 * @file Tree-sitter based parser for Lua patterns
 * @author MD. Mouinul Hossain <mdmouinulhossainshawon@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "lua_pattern",

  extras: _ => [/\r?\n/],

  rules: {
    source_file: $ => repeat(
      choice(
        $.literal_character,
        $.character_class,
        $.escaped_character,
        $.capture_group,
        $.any_character
        //$.extras
      ),
    ),

    zero_or_more: _ => /\*/,
    one_or_more: _ => /\+/,
    optional: _ => /\?/,

    literal_character: $ => seq(
      /[^\^\$\+\*\-\?\(\)\[\]\.]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,

          $.optional
        )
      )
    ),
    character_class: $ => choice(
      $.predefined_class,
      seq(
        "[",
        optional("^"),
        repeat1(
          choice(
            $.ranged_class,
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

            $.optional
          )
        )
      )
    ),
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

    class_character: _ => /[^\%\-%]/,
    any_character: $ => seq(
      ".",
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,

          $.optional
        )
      )
    ),

    predefined_class: $ => seq(
      "%",
      /[acdlpsuwxzACDLPSUWXZ]/,
      optional(
        choice(
          $.zero_or_more,
          $.one_or_more,

          $.optional
        )
      )
    ),
    ranged_class: $ => seq(
      $.class_character,
      "-",
      $.class_character,
    ),
    escaped_character: _ => seq(
      "%",
      /[^acdlpsuwxzACDLPSUWXZ]/
    ),
  }
});

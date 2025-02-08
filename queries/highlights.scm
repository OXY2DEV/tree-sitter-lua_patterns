[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[
  (escaped_characters)
  (start_assertion)
  (end_assertion)
] @escape

[
  "*"
  "+"
  "?"
] @operator

(character_class
  [
    "^" @operator
    (class_range
      "-" @operator)
  ])

[
  (class_character)
] @constant.character

(literal_character) @string

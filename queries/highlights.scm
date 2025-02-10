[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[
  (escaped_character)
  (start_assertion)
  (end_assertion)
] @escape

[
  (zero_or_more)
  (one_or_more)
  (lazy)
  (optional)
] @operator

(character_class
  [
    "^" @operator
    (character_set
      "-" @operator)
  ])

[
  (class_character)
] @constant.character

(literal_character) @string

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_zero_or_more = 1,
  sym_one_or_more = 2,
  sym_optional = 3,
  aux_sym_literal_character_token1 = 4,
  sym_class_character = 5,
  anon_sym_DOT = 6,
  anon_sym_PERCENT = 7,
  aux_sym_predefined_class_token1 = 8,
  anon_sym_DASH = 9,
  aux_sym_escaped_character_token1 = 10,
  anon_sym_LBRACK = 11,
  anon_sym_CARET = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym_source_file = 16,
  sym_literal_character = 17,
  sym_any_character = 18,
  sym_predefined_class = 19,
  sym_character_set = 20,
  sym_escaped_character = 21,
  sym_character_class = 22,
  sym_capture_group = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_character_class_repeat1 = 25,
  aux_sym_capture_group_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_zero_or_more] = "zero_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_optional] = "optional",
  [aux_sym_literal_character_token1] = "literal_character_token1",
  [sym_class_character] = "class_character",
  [anon_sym_DOT] = ".",
  [anon_sym_PERCENT] = "%",
  [aux_sym_predefined_class_token1] = "predefined_class_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_escaped_character_token1] = "escaped_character_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_literal_character] = "literal_character",
  [sym_any_character] = "any_character",
  [sym_predefined_class] = "predefined_class",
  [sym_character_set] = "character_set",
  [sym_escaped_character] = "escaped_character",
  [sym_character_class] = "character_class",
  [sym_capture_group] = "capture_group",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [aux_sym_capture_group_repeat1] = "capture_group_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_zero_or_more] = sym_zero_or_more,
  [sym_one_or_more] = sym_one_or_more,
  [sym_optional] = sym_optional,
  [aux_sym_literal_character_token1] = aux_sym_literal_character_token1,
  [sym_class_character] = sym_class_character,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_predefined_class_token1] = aux_sym_predefined_class_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_escaped_character_token1] = aux_sym_escaped_character_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_literal_character] = sym_literal_character,
  [sym_any_character] = sym_any_character,
  [sym_predefined_class] = sym_predefined_class,
  [sym_character_set] = sym_character_set,
  [sym_escaped_character] = sym_escaped_character,
  [sym_character_class] = sym_character_class,
  [sym_capture_group] = sym_capture_group,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_character_class_repeat1] = aux_sym_character_class_repeat1,
  [aux_sym_capture_group_repeat1] = aux_sym_capture_group_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_literal_character_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_class_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_predefined_class_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escaped_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_character] = {
    .visible = true,
    .named = true,
  },
  [sym_any_character] = {
    .visible = true,
    .named = true,
  },
  [sym_predefined_class] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_character] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_capture_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_capture_group_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 7,
  [24] = 24,
  [25] = 8,
  [26] = 26,
  [27] = 10,
  [28] = 28,
  [29] = 29,
  [30] = 20,
  [31] = 31,
  [32] = 19,
  [33] = 22,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
};

static TSCharacterRange aux_sym_predefined_class_token1_character_set_1[] = {
  {'A', 'A'}, {'C', 'D'}, {'L', 'L'}, {'P', 'P'}, {'S', 'S'}, {'U', 'U'}, {'W', 'X'}, {'Z', 'Z'},
  {'a', 'a'}, {'c', 'd'}, {'l', 'l'}, {'p', 'p'}, {'s', 's'}, {'u', 'u'}, {'w', 'x'}, {'z', 'z'},
};

static TSCharacterRange aux_sym_escaped_character_token1_character_set_1[] = {
  {0, '@'}, {'B', 'B'}, {'E', 'K'}, {'M', 'O'}, {'Q', 'R'}, {'T', 'T'}, {'V', 'V'}, {'Y', 'Y'},
  {'[', '`'}, {'b', 'b'}, {'e', 'k'}, {'m', 'o'}, {'q', 'r'}, {'t', 't'}, {'v', 'v'}, {'y', 'y'},
  {'{', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(7);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '^') ADVANCE(28);
      if (set_contains(aux_sym_predefined_class_token1_character_set_1, 16, lookahead)) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(15);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 19,
        '\r', 15,
        '%', 22,
        '*', 10,
        '+', 11,
        '.', 21,
        '?', 12,
        ']', 29,
      );
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(15);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 26,
        '\r', 25,
        'A', 23,
        'C', 23,
        'D', 23,
        'L', 23,
        'P', 23,
        'S', 23,
        'U', 23,
        'W', 23,
        'X', 23,
        'Z', 23,
        'a', 23,
        'c', 23,
        'd', 23,
        'l', 23,
        'p', 23,
        's', 23,
        'u', 23,
        'w', 23,
        'x', 23,
        'z', 23,
      );
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(15);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '\n', 14,
        '\r', 13,
        '%', 22,
        '(', 30,
        ')', 31,
        '*', 10,
        '+', 11,
        '.', 21,
        '?', 12,
        '[', 27,
      );
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(15);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_predefined_class_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(25);
      if ((!eof && set_contains(aux_sym_escaped_character_token1_character_set_1, 17, lookahead))) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_zero_or_more] = ACTIONS(1),
    [sym_one_or_more] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_predefined_class_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_literal_character] = STATE(2),
    [sym_any_character] = STATE(2),
    [sym_predefined_class] = STATE(21),
    [sym_escaped_character] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_capture_group] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_literal_character_token1] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      aux_sym_literal_character_token1,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_predefined_class,
    STATE(3), 6,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      sym_capture_group,
      aux_sym_source_file_repeat1,
  [30] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_literal_character_token1,
    ACTIONS(22), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_PERCENT,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_predefined_class,
    STATE(3), 6,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      sym_capture_group,
      aux_sym_source_file_repeat1,
  [60] = 7,
    ACTIONS(5), 1,
      aux_sym_literal_character_token1,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_predefined_class,
    STATE(5), 5,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [86] = 7,
    ACTIONS(36), 1,
      aux_sym_literal_character_token1,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_PERCENT,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_predefined_class,
    STATE(5), 5,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [112] = 3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(54), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [129] = 3,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(60), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [146] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(66), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [163] = 3,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(72), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [180] = 3,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(78), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [197] = 3,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(84), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [214] = 6,
    ACTIONS(5), 1,
      aux_sym_literal_character_token1,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_predefined_class,
    STATE(4), 5,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [237] = 5,
    ACTIONS(86), 1,
      sym_class_character,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(14), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [257] = 5,
    ACTIONS(94), 1,
      sym_class_character,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(14), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [277] = 5,
    ACTIONS(86), 1,
      sym_class_character,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(14), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [297] = 5,
    ACTIONS(86), 1,
      sym_class_character,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    ACTIONS(107), 1,
      anon_sym_CARET,
    STATE(13), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [317] = 4,
    ACTIONS(86), 1,
      sym_class_character,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    STATE(15), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [334] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [346] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [358] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [370] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [382] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [394] = 2,
    ACTIONS(129), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(60), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [406] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [418] = 2,
    ACTIONS(131), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(66), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [430] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [442] = 2,
    ACTIONS(137), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(78), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [454] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 5,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [465] = 2,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(143), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [475] = 1,
    ACTIONS(119), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [482] = 1,
    ACTIONS(147), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [489] = 1,
    ACTIONS(115), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [496] = 1,
    ACTIONS(127), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [503] = 2,
    ACTIONS(149), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(151), 1,
      aux_sym_escaped_character_token1,
  [510] = 2,
    ACTIONS(153), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(155), 1,
      aux_sym_escaped_character_token1,
  [517] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [521] = 1,
    ACTIONS(159), 1,
      sym_class_character,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 163,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 370,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 418,
  [SMALL_STATE(26)] = 430,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 454,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 475,
  [SMALL_STATE(31)] = 482,
  [SMALL_STATE(32)] = 489,
  [SMALL_STATE(33)] = 496,
  [SMALL_STATE(34)] = 503,
  [SMALL_STATE(35)] = 510,
  [SMALL_STATE(36)] = 517,
  [SMALL_STATE(37)] = 521,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_group, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_group, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lua_pattern(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

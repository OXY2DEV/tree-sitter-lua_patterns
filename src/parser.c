#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
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
  anon_sym_LBRACK = 5,
  anon_sym_CARET = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_class_character = 10,
  anon_sym_DOT = 11,
  anon_sym_PERCENT = 12,
  aux_sym_predefined_class_token1 = 13,
  anon_sym_DASH = 14,
  aux_sym_escaped_character_token1 = 15,
  sym_source_file = 16,
  sym_literal_character = 17,
  sym_character_class = 18,
  sym_capture_group = 19,
  sym_any_character = 20,
  sym_predefined_class = 21,
  sym_ranged_class = 22,
  sym_escaped_character = 23,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_class_character] = "class_character",
  [anon_sym_DOT] = ".",
  [anon_sym_PERCENT] = "%",
  [aux_sym_predefined_class_token1] = "predefined_class_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_escaped_character_token1] = "escaped_character_token1",
  [sym_source_file] = "source_file",
  [sym_literal_character] = "literal_character",
  [sym_character_class] = "character_class",
  [sym_capture_group] = "capture_group",
  [sym_any_character] = "any_character",
  [sym_predefined_class] = "predefined_class",
  [sym_ranged_class] = "ranged_class",
  [sym_escaped_character] = "escaped_character",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_class_character] = sym_class_character,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_predefined_class_token1] = aux_sym_predefined_class_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_escaped_character_token1] = aux_sym_escaped_character_token1,
  [sym_source_file] = sym_source_file,
  [sym_literal_character] = sym_literal_character,
  [sym_character_class] = sym_character_class,
  [sym_capture_group] = sym_capture_group,
  [sym_any_character] = sym_any_character,
  [sym_predefined_class] = sym_predefined_class,
  [sym_ranged_class] = sym_ranged_class,
  [sym_escaped_character] = sym_escaped_character,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_character] = {
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
  [sym_any_character] = {
    .visible = true,
    .named = true,
  },
  [sym_predefined_class] = {
    .visible = true,
    .named = true,
  },
  [sym_ranged_class] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_character] = {
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
  [25] = 6,
  [26] = 26,
  [27] = 27,
  [28] = 18,
  [29] = 20,
  [30] = 30,
  [31] = 22,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
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
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '^') ADVANCE(16);
      if (set_contains(aux_sym_predefined_class_token1_character_set_1, 16, lookahead)) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(20);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 24,
        '\r', 20,
        '%', 27,
        '*', 10,
        '+', 11,
        '.', 26,
        '?', 12,
        ']', 17,
      );
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(20);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 31,
        '\r', 30,
        'A', 28,
        'C', 28,
        'D', 28,
        'L', 28,
        'P', 28,
        'S', 28,
        'U', 28,
        'W', 28,
        'X', 28,
        'Z', 28,
        'a', 28,
        'c', 28,
        'd', 28,
        'l', 28,
        'p', 28,
        's', 28,
        'u', 28,
        'w', 28,
        'x', 28,
        'z', 28,
      );
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(20);
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
        '%', 27,
        '(', 18,
        ')', 19,
        '*', 10,
        '+', 11,
        '.', 26,
        '?', 12,
        '[', 15,
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
      if (lookahead == '%') ADVANCE(27);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(20);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_predefined_class_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(30);
      if ((!eof && set_contains(aux_sym_escaped_character_token1_character_set_1, 17, lookahead))) ADVANCE(30);
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_zero_or_more] = ACTIONS(1),
    [sym_one_or_more] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_predefined_class_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_literal_character] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_capture_group] = STATE(2),
    [sym_any_character] = STATE(2),
    [sym_predefined_class] = STATE(17),
    [sym_escaped_character] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_literal_character_token1] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      aux_sym_literal_character_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_predefined_class,
    STATE(3), 6,
      sym_literal_character,
      sym_character_class,
      sym_capture_group,
      sym_any_character,
      sym_escaped_character,
      aux_sym_source_file_repeat1,
  [30] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_literal_character_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    STATE(17), 1,
      sym_predefined_class,
    STATE(3), 6,
      sym_literal_character,
      sym_character_class,
      sym_capture_group,
      sym_any_character,
      sym_escaped_character,
      aux_sym_source_file_repeat1,
  [60] = 7,
    ACTIONS(5), 1,
      aux_sym_literal_character_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_predefined_class,
    STATE(5), 5,
      sym_literal_character,
      sym_character_class,
      sym_any_character,
      sym_escaped_character,
      aux_sym_capture_group_repeat1,
  [86] = 7,
    ACTIONS(36), 1,
      aux_sym_literal_character_token1,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_PERCENT,
    STATE(17), 1,
      sym_predefined_class,
    STATE(5), 5,
      sym_literal_character,
      sym_character_class,
      sym_any_character,
      sym_escaped_character,
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
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [129] = 3,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(60), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [146] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(66), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [163] = 6,
    ACTIONS(5), 1,
      aux_sym_literal_character_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    STATE(17), 1,
      sym_predefined_class,
    STATE(4), 5,
      sym_literal_character,
      sym_character_class,
      sym_any_character,
      sym_escaped_character,
      aux_sym_capture_group_repeat1,
  [186] = 3,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(72), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [203] = 3,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(78), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [220] = 5,
    ACTIONS(80), 1,
      anon_sym_CARET,
    ACTIONS(82), 1,
      sym_class_character,
    ACTIONS(84), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      anon_sym_PERCENT,
    STATE(13), 5,
      sym_any_character,
      sym_predefined_class,
      sym_ranged_class,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [240] = 5,
    ACTIONS(82), 1,
      sym_class_character,
    ACTIONS(84), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      anon_sym_PERCENT,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(15), 5,
      sym_any_character,
      sym_predefined_class,
      sym_ranged_class,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [260] = 5,
    ACTIONS(82), 1,
      sym_class_character,
    ACTIONS(84), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      anon_sym_PERCENT,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(15), 5,
      sym_any_character,
      sym_predefined_class,
      sym_ranged_class,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [280] = 5,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(94), 1,
      sym_class_character,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    STATE(15), 5,
      sym_any_character,
      sym_predefined_class,
      sym_ranged_class,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [300] = 4,
    ACTIONS(82), 1,
      sym_class_character,
    ACTIONS(84), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      anon_sym_PERCENT,
    STATE(14), 5,
      sym_any_character,
      sym_predefined_class,
      sym_ranged_class,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [317] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [329] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [341] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [353] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [365] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [377] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [389] = 2,
    ACTIONS(123), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(60), 4,
      anon_sym_RBRACK,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [401] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 6,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [413] = 2,
    ACTIONS(129), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(54), 4,
      anon_sym_RBRACK,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [425] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 5,
      aux_sym_literal_character_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [436] = 2,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(135), 4,
      anon_sym_RBRACK,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [446] = 1,
    ACTIONS(109), 4,
      anon_sym_RBRACK,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [453] = 1,
    ACTIONS(117), 4,
      anon_sym_RBRACK,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [460] = 1,
    ACTIONS(139), 4,
      anon_sym_RBRACK,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [467] = 1,
    ACTIONS(121), 4,
      anon_sym_RBRACK,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
  [474] = 2,
    ACTIONS(141), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(143), 1,
      aux_sym_escaped_character_token1,
  [481] = 2,
    ACTIONS(145), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(147), 1,
      aux_sym_escaped_character_token1,
  [488] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [492] = 1,
    ACTIONS(151), 1,
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
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 280,
  [SMALL_STATE(16)] = 300,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 329,
  [SMALL_STATE(19)] = 341,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 377,
  [SMALL_STATE(23)] = 389,
  [SMALL_STATE(24)] = 401,
  [SMALL_STATE(25)] = 413,
  [SMALL_STATE(26)] = 425,
  [SMALL_STATE(27)] = 436,
  [SMALL_STATE(28)] = 446,
  [SMALL_STATE(29)] = 453,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 467,
  [SMALL_STATE(32)] = 474,
  [SMALL_STATE(33)] = 481,
  [SMALL_STATE(34)] = 488,
  [SMALL_STATE(35)] = 492,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_group, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_group, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranged_class, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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

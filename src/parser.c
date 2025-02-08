#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_CARET = 1,
  sym_end_assertion = 2,
  sym_zero_or_more = 3,
  sym_one_or_more = 4,
  sym_lazy = 5,
  sym_optional = 6,
  aux_sym_literal_character_token1 = 7,
  sym_class_character = 8,
  anon_sym_DOT = 9,
  anon_sym_PERCENT = 10,
  aux_sym_predefined_class_token1 = 11,
  anon_sym_DASH = 12,
  aux_sym_escaped_character_token1 = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  sym_source_file = 18,
  sym_start_assertion = 19,
  sym_literal_character = 20,
  sym_any_character = 21,
  sym_predefined_class = 22,
  sym_character_set = 23,
  sym_escaped_character = 24,
  sym_character_class = 25,
  sym_capture_group = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_character_class_repeat1 = 28,
  aux_sym_capture_group_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CARET] = "^",
  [sym_end_assertion] = "end_assertion",
  [sym_zero_or_more] = "zero_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_lazy] = "lazy",
  [sym_optional] = "optional",
  [aux_sym_literal_character_token1] = "literal_character_token1",
  [sym_class_character] = "class_character",
  [anon_sym_DOT] = ".",
  [anon_sym_PERCENT] = "%",
  [aux_sym_predefined_class_token1] = "predefined_class_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_escaped_character_token1] = "escaped_character_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_start_assertion] = "start_assertion",
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
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_end_assertion] = sym_end_assertion,
  [sym_zero_or_more] = sym_zero_or_more,
  [sym_one_or_more] = sym_one_or_more,
  [sym_lazy] = sym_lazy,
  [sym_optional] = sym_optional,
  [aux_sym_literal_character_token1] = aux_sym_literal_character_token1,
  [sym_class_character] = sym_class_character,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_predefined_class_token1] = aux_sym_predefined_class_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_escaped_character_token1] = aux_sym_escaped_character_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_start_assertion] = sym_start_assertion,
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
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_end_assertion] = {
    .visible = true,
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
  [sym_lazy] = {
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
  [sym_start_assertion] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 9,
  [28] = 6,
  [29] = 7,
  [30] = 30,
  [31] = 16,
  [32] = 32,
  [33] = 18,
  [34] = 21,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
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
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '^') ADVANCE(10);
      if (set_contains(aux_sym_predefined_class_token1_character_set_1, 16, lookahead)) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(18);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 22,
        '\r', 18,
        '%', 25,
        '*', 12,
        '+', 13,
        '-', 14,
        '.', 24,
        '?', 15,
        ']', 31,
      );
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 29,
        '\r', 28,
        'A', 26,
        'C', 26,
        'D', 26,
        'L', 26,
        'P', 26,
        'S', 26,
        'U', 26,
        'W', 26,
        'X', 26,
        'Z', 26,
        'a', 26,
        'c', 26,
        'd', 26,
        'l', 26,
        'p', 26,
        's', 26,
        'u', 26,
        'w', 26,
        'x', 26,
        'z', 26,
      );
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(18);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '\n', 17,
        '\r', 16,
        '$', 11,
        '%', 25,
        '(', 32,
        ')', 33,
        '*', 12,
        '+', 13,
        '-', 14,
        '.', 24,
        '?', 15,
        '[', 30,
        '^', 10,
      );
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_lazy);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_predefined_class_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(28);
      if ((!eof && set_contains(aux_sym_escaped_character_token1_character_set_1, 17, lookahead))) ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
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
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [sym_zero_or_more] = ACTIONS(1),
    [sym_one_or_more] = ACTIONS(1),
    [sym_lazy] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_predefined_class_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_start_assertion] = STATE(2),
    [sym_literal_character] = STATE(2),
    [sym_any_character] = STATE(2),
    [sym_predefined_class] = STATE(14),
    [sym_escaped_character] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_capture_group] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(5),
    [sym_end_assertion] = ACTIONS(7),
    [aux_sym_literal_character_token1] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [2] = {
    [sym_start_assertion] = STATE(3),
    [sym_literal_character] = STATE(3),
    [sym_any_character] = STATE(3),
    [sym_predefined_class] = STATE(14),
    [sym_escaped_character] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_capture_group] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(5),
    [sym_end_assertion] = ACTIONS(21),
    [aux_sym_literal_character_token1] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [3] = {
    [sym_start_assertion] = STATE(3),
    [sym_literal_character] = STATE(3),
    [sym_any_character] = STATE(3),
    [sym_predefined_class] = STATE(14),
    [sym_escaped_character] = STATE(3),
    [sym_character_class] = STATE(3),
    [sym_capture_group] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [sym_end_assertion] = ACTIONS(28),
    [aux_sym_literal_character_token1] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(34),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(48), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [20] = 3,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(54), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [40] = 3,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(60), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [60] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(66), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [80] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(72), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [100] = 3,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(78), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [120] = 7,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_predefined_class,
    STATE(11), 5,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [146] = 7,
    ACTIONS(84), 1,
      aux_sym_literal_character_token1,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_predefined_class,
    STATE(11), 5,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [172] = 6,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_predefined_class,
    STATE(10), 5,
      sym_literal_character,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [195] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [209] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [223] = 5,
    ACTIONS(106), 1,
      sym_class_character,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_PERCENT,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(22), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [243] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [257] = 5,
    ACTIONS(106), 1,
      sym_class_character,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_PERCENT,
    ACTIONS(118), 1,
      anon_sym_CARET,
    STATE(15), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [277] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [291] = 5,
    ACTIONS(106), 1,
      sym_class_character,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_PERCENT,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(22), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [311] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [325] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [339] = 5,
    ACTIONS(134), 1,
      sym_class_character,
    ACTIONS(137), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(22), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [359] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 8,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [373] = 4,
    ACTIONS(106), 1,
      sym_class_character,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_PERCENT,
    STATE(19), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [390] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 7,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [403] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 7,
      anon_sym_CARET,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [416] = 2,
    ACTIONS(78), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(153), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
  [429] = 2,
    ACTIONS(60), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(155), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
  [442] = 2,
    ACTIONS(66), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(157), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
  [455] = 2,
    ACTIONS(161), 1,
      anon_sym_DASH,
    ACTIONS(159), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [465] = 1,
    ACTIONS(116), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [472] = 1,
    ACTIONS(163), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [479] = 1,
    ACTIONS(122), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [486] = 1,
    ACTIONS(132), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [493] = 2,
    ACTIONS(165), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(167), 1,
      aux_sym_escaped_character_token1,
  [500] = 2,
    ACTIONS(169), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(171), 1,
      aux_sym_escaped_character_token1,
  [507] = 1,
    ACTIONS(173), 1,
      sym_class_character,
  [511] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 243,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 277,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 359,
  [SMALL_STATE(24)] = 373,
  [SMALL_STATE(25)] = 390,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 416,
  [SMALL_STATE(28)] = 429,
  [SMALL_STATE(29)] = 442,
  [SMALL_STATE(30)] = 455,
  [SMALL_STATE(31)] = 465,
  [SMALL_STATE(32)] = 472,
  [SMALL_STATE(33)] = 479,
  [SMALL_STATE(34)] = 486,
  [SMALL_STATE(35)] = 493,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 511,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_group, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_group, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

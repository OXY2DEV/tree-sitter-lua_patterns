#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
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
  aux_sym_literal_characters_token1 = 7,
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
  sym_pattern = 18,
  sym_start_assertion = 19,
  sym_literal_characters = 20,
  sym_any_character = 21,
  sym_predefined_class = 22,
  sym_character_set = 23,
  sym_escaped_character = 24,
  sym_character_class = 25,
  sym_capture_group = 26,
  aux_sym_pattern_repeat1 = 27,
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
  [aux_sym_literal_characters_token1] = "literal_characters_token1",
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
  [sym_pattern] = "pattern",
  [sym_start_assertion] = "start_assertion",
  [sym_literal_characters] = "literal_characters",
  [sym_any_character] = "any_character",
  [sym_predefined_class] = "predefined_class",
  [sym_character_set] = "character_set",
  [sym_escaped_character] = "escaped_character",
  [sym_character_class] = "character_class",
  [sym_capture_group] = "capture_group",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
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
  [aux_sym_literal_characters_token1] = aux_sym_literal_characters_token1,
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
  [sym_pattern] = sym_pattern,
  [sym_start_assertion] = sym_start_assertion,
  [sym_literal_characters] = sym_literal_characters,
  [sym_any_character] = sym_any_character,
  [sym_predefined_class] = sym_predefined_class,
  [sym_character_set] = sym_character_set,
  [sym_escaped_character] = sym_escaped_character,
  [sym_character_class] = sym_character_class,
  [sym_capture_group] = sym_capture_group,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
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
  [aux_sym_literal_characters_token1] = {
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
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_start_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_characters] = {
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
  [aux_sym_pattern_repeat1] = {
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
  [25] = 6,
  [26] = 26,
  [27] = 8,
  [28] = 7,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 20,
  [35] = 21,
  [36] = 22,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
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
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '^') ADVANCE(10);
      if (set_contains(aux_sym_predefined_class_token1_character_set_1, 16, lookahead)) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(19);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 23,
        '\r', 19,
        '%', 26,
        '*', 12,
        '+', 13,
        '-', 14,
        '.', 25,
        '?', 15,
        ']', 33,
      );
      if (lookahead != 0) ADVANCE(19);
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
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(19);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '\n', 16,
        '\r', 17,
        '$', 11,
        '%', 27,
        '(', 34,
        ')', 35,
        '*', 12,
        '+', 13,
        '-', 14,
        '.', 25,
        '?', 15,
        '[', 32,
        '^', 10,
      );
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(18);
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
      ACCEPT_TOKEN(aux_sym_literal_characters_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
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
          lookahead != '^') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_literal_characters_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_literal_characters_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-') ADVANCE(19);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(18);
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
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
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
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
    [sym_pattern] = STATE(39),
    [sym_start_assertion] = STATE(3),
    [sym_literal_characters] = STATE(2),
    [sym_any_character] = STATE(2),
    [sym_predefined_class] = STATE(24),
    [sym_escaped_character] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_capture_group] = STATE(2),
    [aux_sym_pattern_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(5),
    [sym_end_assertion] = ACTIONS(7),
    [aux_sym_literal_characters_token1] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      aux_sym_literal_characters_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_end_assertion,
    STATE(24), 1,
      sym_predefined_class,
    STATE(5), 6,
      sym_literal_characters,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [33] = 9,
    ACTIONS(9), 1,
      aux_sym_literal_characters_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_end_assertion,
    STATE(24), 1,
      sym_predefined_class,
    STATE(4), 6,
      sym_literal_characters,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [66] = 9,
    ACTIONS(9), 1,
      aux_sym_literal_characters_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_end_assertion,
    STATE(24), 1,
      sym_predefined_class,
    STATE(5), 6,
      sym_literal_characters,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [99] = 9,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_end_assertion,
    ACTIONS(31), 1,
      aux_sym_literal_characters_token1,
    ACTIONS(34), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_predefined_class,
    STATE(5), 6,
      sym_literal_characters,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [132] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(48), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [151] = 3,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(54), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [170] = 3,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(60), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [189] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(66), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [208] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(72), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [227] = 3,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(78), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [246] = 7,
    ACTIONS(9), 1,
      aux_sym_literal_characters_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_predefined_class,
    STATE(13), 5,
      sym_literal_characters,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [272] = 7,
    ACTIONS(84), 1,
      aux_sym_literal_characters_token1,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_predefined_class,
    STATE(13), 5,
      sym_literal_characters,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [298] = 6,
    ACTIONS(9), 1,
      aux_sym_literal_characters_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_predefined_class,
    STATE(12), 5,
      sym_literal_characters,
      sym_any_character,
      sym_escaped_character,
      sym_character_class,
      aux_sym_capture_group_repeat1,
  [321] = 5,
    ACTIONS(98), 1,
      sym_class_character,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(18), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [341] = 5,
    ACTIONS(98), 1,
      sym_class_character,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      anon_sym_CARET,
    STATE(15), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [361] = 5,
    ACTIONS(98), 1,
      sym_class_character,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(18), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [381] = 5,
    ACTIONS(110), 1,
      sym_class_character,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(18), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [401] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [414] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [427] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [440] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [453] = 4,
    ACTIONS(98), 1,
      sym_class_character,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    STATE(17), 5,
      sym_any_character,
      sym_predefined_class,
      sym_character_set,
      sym_escaped_character,
      aux_sym_character_class_repeat1,
  [470] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [483] = 2,
    ACTIONS(48), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(141), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
  [496] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [509] = 2,
    ACTIONS(60), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(147), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
  [522] = 2,
    ACTIONS(54), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(149), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
  [535] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 7,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [548] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 6,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [560] = 2,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 6,
      sym_end_assertion,
      aux_sym_literal_characters_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [572] = 2,
    ACTIONS(161), 1,
      anon_sym_DASH,
    ACTIONS(159), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [582] = 1,
    ACTIONS(163), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [589] = 1,
    ACTIONS(127), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [596] = 1,
    ACTIONS(131), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [603] = 1,
    ACTIONS(135), 4,
      sym_class_character,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [610] = 2,
    ACTIONS(165), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(167), 1,
      aux_sym_escaped_character_token1,
  [617] = 2,
    ACTIONS(169), 1,
      aux_sym_predefined_class_token1,
    ACTIONS(171), 1,
      aux_sym_escaped_character_token1,
  [624] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [628] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [632] = 1,
    ACTIONS(175), 1,
      sym_class_character,
  [636] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [640] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 227,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 341,
  [SMALL_STATE(17)] = 361,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 401,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 427,
  [SMALL_STATE(22)] = 440,
  [SMALL_STATE(23)] = 453,
  [SMALL_STATE(24)] = 470,
  [SMALL_STATE(25)] = 483,
  [SMALL_STATE(26)] = 496,
  [SMALL_STATE(27)] = 509,
  [SMALL_STATE(28)] = 522,
  [SMALL_STATE(29)] = 535,
  [SMALL_STATE(30)] = 548,
  [SMALL_STATE(31)] = 560,
  [SMALL_STATE(32)] = 572,
  [SMALL_STATE(33)] = 582,
  [SMALL_STATE(34)] = 589,
  [SMALL_STATE(35)] = 596,
  [SMALL_STATE(36)] = 603,
  [SMALL_STATE(37)] = 610,
  [SMALL_STATE(38)] = 617,
  [SMALL_STATE(39)] = 624,
  [SMALL_STATE(40)] = 628,
  [SMALL_STATE(41)] = 632,
  [SMALL_STATE(42)] = 636,
  [SMALL_STATE(43)] = 640,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_characters, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_characters, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_characters, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_characters, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_class, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_group, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_group, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_lua_patterns(void) {
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

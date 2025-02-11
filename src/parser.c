#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  anon_sym_DOT = 8,
  anon_sym_PERCENT = 9,
  aux_sym_character_class_token1 = 10,
  anon_sym_DASH = 11,
  aux_sym_escaped_character_token1 = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_pattern = 17,
  sym_start_assertion = 18,
  sym_literal_character = 19,
  sym_any_character = 20,
  sym_character_class = 21,
  sym_character_range = 22,
  sym_escaped_character = 23,
  sym_set_class = 24,
  sym_set_character = 25,
  sym_set_escaped = 26,
  sym_set_any = 27,
  sym_character_set_content = 28,
  sym_character_set = 29,
  sym_capture_group = 30,
  aux_sym_pattern_repeat1 = 31,
  aux_sym_character_set_content_repeat1 = 32,
  aux_sym_capture_group_repeat1 = 33,
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
  [anon_sym_DOT] = ".",
  [anon_sym_PERCENT] = "%",
  [aux_sym_character_class_token1] = "character_class_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_escaped_character_token1] = "escaped_character_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_pattern] = "pattern",
  [sym_start_assertion] = "start_assertion",
  [sym_literal_character] = "literal_character",
  [sym_any_character] = "any_character",
  [sym_character_class] = "character_class",
  [sym_character_range] = "character_range",
  [sym_escaped_character] = "escaped_character",
  [sym_set_class] = "character_class",
  [sym_set_character] = "literal_character",
  [sym_set_escaped] = "escaped_character",
  [sym_set_any] = "any_character",
  [sym_character_set_content] = "character_set_content",
  [sym_character_set] = "character_set",
  [sym_capture_group] = "capture_group",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_character_set_content_repeat1] = "character_set_content_repeat1",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_character_class_token1] = aux_sym_character_class_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_escaped_character_token1] = aux_sym_escaped_character_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_pattern] = sym_pattern,
  [sym_start_assertion] = sym_start_assertion,
  [sym_literal_character] = sym_literal_character,
  [sym_any_character] = sym_any_character,
  [sym_character_class] = sym_character_class,
  [sym_character_range] = sym_character_range,
  [sym_escaped_character] = sym_escaped_character,
  [sym_set_class] = sym_character_class,
  [sym_set_character] = sym_literal_character,
  [sym_set_escaped] = sym_escaped_character,
  [sym_set_any] = sym_any_character,
  [sym_character_set_content] = sym_character_set_content,
  [sym_character_set] = sym_character_set,
  [sym_capture_group] = sym_capture_group,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_character_set_content_repeat1] = aux_sym_character_set_content_repeat1,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_class_token1] = {
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
  [sym_literal_character] = {
    .visible = true,
    .named = true,
  },
  [sym_any_character] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_character_range] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_character] = {
    .visible = true,
    .named = true,
  },
  [sym_set_class] = {
    .visible = true,
    .named = true,
  },
  [sym_set_character] = {
    .visible = true,
    .named = true,
  },
  [sym_set_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_set_any] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set_content] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set] = {
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
  [aux_sym_character_set_content_repeat1] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static TSCharacterRange aux_sym_character_class_token1_character_set_1[] = {
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
      if (eof) ADVANCE(6);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(4);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '^') ADVANCE(7);
      if (set_contains(aux_sym_character_class_token1_character_set_1, 16, lookahead)) ADVANCE(18);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 14,
        '\r', 13,
        '%', 17,
        ')', 25,
        '-', 19,
        '.', 16,
        '[', 22,
        ']', 23,
      );
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '?' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(13);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 21,
        '\r', 20,
        'A', 18,
        'C', 18,
        'D', 18,
        'L', 18,
        'P', 18,
        'S', 18,
        'U', 18,
        'W', 18,
        'X', 18,
        'Z', 18,
        'a', 18,
        'c', 18,
        'd', 18,
        'l', 18,
        'p', 18,
        's', 18,
        'u', 18,
        'w', 18,
        'x', 18,
        'z', 18,
      );
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(13);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '\n', 14,
        '\r', 13,
        '$', 8,
        '%', 17,
        '(', 24,
        ')', 25,
        '*', 9,
        '+', 10,
        '-', 11,
        '.', 16,
        '?', 12,
        '[', 22,
        ']', 23,
        '^', 7,
      );
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_lazy);
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
      if (lookahead == '%') ADVANCE(17);
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
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_character_class_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(20);
      if ((!eof && set_contains(aux_sym_escaped_character_token1_character_set_1, 17, lookahead))) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
    [aux_sym_character_class_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(40),
    [sym_start_assertion] = STATE(3),
    [sym_literal_character] = STATE(2),
    [sym_any_character] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_escaped_character] = STATE(2),
    [sym_character_set] = STATE(2),
    [sym_capture_group] = STATE(2),
    [aux_sym_pattern_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(5),
    [sym_end_assertion] = ACTIONS(7),
    [aux_sym_literal_character_token1] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
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
    STATE(4), 7,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [31] = 8,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
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
    STATE(5), 7,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [62] = 8,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_end_assertion,
    ACTIONS(27), 1,
      aux_sym_literal_character_token1,
    ACTIONS(30), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_PERCENT,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(4), 7,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [93] = 8,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_end_assertion,
    STATE(4), 7,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [124] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(48), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [143] = 3,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(54), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [162] = 7,
    ACTIONS(58), 1,
      anon_sym_CARET,
    ACTIONS(60), 1,
      aux_sym_literal_character_token1,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_PERCENT,
    STATE(31), 1,
      sym_set_character,
    STATE(41), 1,
      sym_character_set_content,
    STATE(18), 5,
      sym_character_range,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [188] = 3,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(68), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [206] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(74), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [224] = 3,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(80), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [242] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(86), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [260] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      aux_sym_literal_character_token1,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_PERCENT,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(14), 6,
      sym_set_class,
      sym_set_character,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [284] = 6,
    ACTIONS(92), 1,
      aux_sym_literal_character_token1,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_PERCENT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(14), 6,
      sym_set_class,
      sym_set_character,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [308] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      aux_sym_literal_character_token1,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_PERCENT,
    STATE(13), 6,
      sym_set_class,
      sym_set_character,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [329] = 6,
    ACTIONS(60), 1,
      aux_sym_literal_character_token1,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_PERCENT,
    STATE(31), 1,
      sym_set_character,
    STATE(37), 1,
      sym_character_set_content,
    STATE(18), 5,
      sym_character_range,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [352] = 6,
    ACTIONS(106), 1,
      aux_sym_literal_character_token1,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_set_character,
    STATE(17), 5,
      sym_character_range,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [375] = 6,
    ACTIONS(60), 1,
      aux_sym_literal_character_token1,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_PERCENT,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_set_character,
    STATE(17), 5,
      sym_character_range,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [398] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [411] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [424] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [436] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [448] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [460] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [472] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [484] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 6,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [496] = 1,
    ACTIONS(147), 7,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [506] = 1,
    ACTIONS(149), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [515] = 1,
    ACTIONS(151), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [524] = 1,
    ACTIONS(153), 6,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [533] = 2,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(155), 4,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [543] = 1,
    ACTIONS(159), 4,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [550] = 2,
    ACTIONS(161), 1,
      aux_sym_character_class_token1,
    ACTIONS(163), 1,
      aux_sym_escaped_character_token1,
  [557] = 2,
    ACTIONS(165), 1,
      aux_sym_character_class_token1,
    ACTIONS(167), 1,
      aux_sym_escaped_character_token1,
  [564] = 2,
    ACTIONS(169), 1,
      aux_sym_literal_character_token1,
    STATE(32), 1,
      sym_set_character,
  [571] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [575] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [579] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [583] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [587] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [591] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 242,
  [SMALL_STATE(13)] = 260,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 352,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 398,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 436,
  [SMALL_STATE(23)] = 448,
  [SMALL_STATE(24)] = 460,
  [SMALL_STATE(25)] = 472,
  [SMALL_STATE(26)] = 484,
  [SMALL_STATE(27)] = 496,
  [SMALL_STATE(28)] = 506,
  [SMALL_STATE(29)] = 515,
  [SMALL_STATE(30)] = 524,
  [SMALL_STATE(31)] = 533,
  [SMALL_STATE(32)] = 543,
  [SMALL_STATE(33)] = 550,
  [SMALL_STATE(34)] = 557,
  [SMALL_STATE(35)] = 564,
  [SMALL_STATE(36)] = 571,
  [SMALL_STATE(37)] = 575,
  [SMALL_STATE(38)] = 579,
  [SMALL_STATE(39)] = 583,
  [SMALL_STATE(40)] = 587,
  [SMALL_STATE(41)] = 591,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set_content, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 5, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 5, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_group, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_group, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_character, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_class, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_escaped, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_any, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_range, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

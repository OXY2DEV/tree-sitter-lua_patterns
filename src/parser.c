#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  aux_sym_escape_sequence_token1 = 13,
  sym_set_character = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_pattern = 19,
  sym_start_assertion = 20,
  sym_literal_character = 21,
  sym_any_character = 22,
  sym_character_class = 23,
  sym_character_range = 24,
  sym_escaped_character = 25,
  sym_escape_sequence = 26,
  sym_set_sequence = 27,
  sym_set_class = 28,
  sym_set_escaped = 29,
  sym_set_any = 30,
  sym_character_set_content = 31,
  sym_character_set = 32,
  sym_capture_group = 33,
  aux_sym_pattern_repeat1 = 34,
  aux_sym_character_set_content_repeat1 = 35,
  aux_sym_capture_group_repeat1 = 36,
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
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [sym_set_character] = "literal_character",
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
  [sym_escape_sequence] = "escape_sequence",
  [sym_set_sequence] = "escape_sequence",
  [sym_set_class] = "character_class",
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
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [sym_set_character] = sym_literal_character,
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
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_set_sequence] = sym_escape_sequence,
  [sym_set_class] = sym_character_class,
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
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_set_character] = {
    .visible = true,
    .named = true,
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_set_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_set_class] = {
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
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 15,
  [23] = 13,
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
  [37] = 30,
  [38] = 38,
  [39] = 29,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 48,
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
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(6);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '^') ADVANCE(11);
      if (set_contains(aux_sym_character_class_token1_character_set_1, 16, lookahead)) ADVANCE(24);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 30,
        '\r', 29,
        '%', 23,
        ')', 36,
        '*', 13,
        '+', 14,
        '-', 15,
        '.', 22,
        '?', 16,
        '[', 33,
        '\\', 32,
        ']', 34,
        '^', 11,
      );
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead)) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead)) ADVANCE(29);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 27,
        '\r', 26,
        'A', 24,
        'C', 24,
        'D', 24,
        'L', 24,
        'P', 24,
        'S', 24,
        'U', 24,
        'W', 24,
        'X', 24,
        'Z', 24,
        'a', 24,
        'c', 24,
        'd', 24,
        'l', 24,
        'p', 24,
        's', 24,
        'u', 24,
        'w', 24,
        'x', 24,
        'z', 24,
      );
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(29);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 28,
        '\'', 28,
        '0', 28,
        '\\', 28,
        'b', 28,
        'f', 28,
        'n', 28,
        'r', 28,
        't', 28,
        'v', 28,
      );
      END_STATE();
    case 6:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '\n', 18,
        '\r', 17,
        '$', 12,
        '%', 23,
        '(', 35,
        '.', 22,
        '[', 33,
        '\\', 21,
        '^', 11,
      );
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '\n', 19,
        '\r', 17,
        '$', 12,
        '%', 23,
        '(', 35,
        '.', 22,
        '[', 33,
        '\\', 21,
      );
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '\n', 20,
        '\r', 17,
        '$', 12,
        '%', 23,
        '(', 35,
        '*', 13,
        '+', 14,
        '-', 15,
        '.', 22,
        '?', 16,
        '[', 33,
        '\\', 21,
      );
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_lazy);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '^') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '.' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '.' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      ADVANCE_MAP(
        '\n', 20,
        '\r', 17,
        '$', 12,
        '%', 23,
        '*', 13,
        '+', 14,
        '-', 15,
        '?', 16,
        '\\', 21,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(17);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      ADVANCE_MAP(
        '"', 28,
        '\'', 28,
        '0', 28,
        '\\', 28,
        'b', 28,
        'f', 28,
        'n', 28,
        'r', 28,
        't', 28,
        'v', 28,
      );
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_character_class_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(26);
      if ((!eof && set_contains(aux_sym_escaped_character_token1_character_set_1, 17, lookahead))) ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_set_character);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_set_character);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead)) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_set_character);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(29);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_set_character);
      ADVANCE_MAP(
        '"', 28,
        '\'', 28,
        '0', 28,
        '\\', 28,
        'b', 28,
        'f', 28,
        'n', 28,
        'r', 28,
        't', 28,
        'v', 28,
      );
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(47),
    [sym_start_assertion] = STATE(5),
    [sym_literal_character] = STATE(2),
    [sym_any_character] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_escaped_character] = STATE(2),
    [sym_escape_sequence] = STATE(2),
    [sym_character_set] = STATE(2),
    [sym_capture_group] = STATE(2),
    [aux_sym_pattern_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(5),
    [sym_end_assertion] = ACTIONS(7),
    [aux_sym_literal_character_token1] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [aux_sym_escape_sequence_token1] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_end_assertion,
    STATE(3), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [35] = 9,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_end_assertion,
    ACTIONS(29), 1,
      aux_sym_literal_character_token1,
    ACTIONS(32), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_PERCENT,
    ACTIONS(38), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(3), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [70] = 9,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_end_assertion,
    STATE(3), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [105] = 9,
    ACTIONS(9), 1,
      aux_sym_literal_character_token1,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_end_assertion,
    STATE(4), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [140] = 3,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(53), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [159] = 3,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(59), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [178] = 3,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(65), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [197] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(71), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [216] = 7,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(81), 1,
      sym_set_character,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(14), 6,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [243] = 3,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(89), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [262] = 7,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      sym_set_character,
    STATE(51), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [289] = 3,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(99), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [308] = 7,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      anon_sym_PERCENT,
    ACTIONS(109), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(112), 1,
      sym_set_character,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(14), 6,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [335] = 3,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(122), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [354] = 7,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(95), 1,
      sym_set_character,
    ACTIONS(126), 1,
      anon_sym_CARET,
    STATE(48), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [381] = 6,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(95), 1,
      sym_set_character,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(18), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [405] = 6,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(136), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(139), 1,
      sym_set_character,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(18), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [429] = 6,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(95), 1,
      sym_set_character,
    STATE(43), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [453] = 6,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      sym_set_character,
    STATE(10), 6,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [477] = 6,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_PERCENT,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(95), 1,
      sym_set_character,
    STATE(49), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [501] = 2,
    ACTIONS(146), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(122), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [516] = 2,
    ACTIONS(148), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(99), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [531] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [544] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [557] = 2,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [570] = 2,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [583] = 2,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [596] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [609] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [622] = 2,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [635] = 2,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 7,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [648] = 1,
    ACTIONS(182), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [658] = 1,
    ACTIONS(184), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [668] = 1,
    ACTIONS(186), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [678] = 1,
    ACTIONS(188), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [688] = 1,
    ACTIONS(122), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [697] = 2,
    ACTIONS(192), 1,
      anon_sym_DASH,
    ACTIONS(190), 5,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_RBRACK,
  [708] = 1,
    ACTIONS(172), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [717] = 1,
    ACTIONS(194), 5,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_RBRACK,
  [725] = 2,
    ACTIONS(196), 1,
      aux_sym_character_class_token1,
    ACTIONS(198), 1,
      aux_sym_escaped_character_token1,
  [732] = 2,
    ACTIONS(200), 1,
      aux_sym_character_class_token1,
    ACTIONS(202), 1,
      aux_sym_escaped_character_token1,
  [739] = 1,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
  [743] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [747] = 1,
    ACTIONS(208), 1,
      sym_set_character,
  [751] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [755] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [759] = 1,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
  [763] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
  [767] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [771] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 335,
  [SMALL_STATE(16)] = 354,
  [SMALL_STATE(17)] = 381,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 453,
  [SMALL_STATE(21)] = 477,
  [SMALL_STATE(22)] = 501,
  [SMALL_STATE(23)] = 516,
  [SMALL_STATE(24)] = 531,
  [SMALL_STATE(25)] = 544,
  [SMALL_STATE(26)] = 557,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 583,
  [SMALL_STATE(29)] = 596,
  [SMALL_STATE(30)] = 609,
  [SMALL_STATE(31)] = 622,
  [SMALL_STATE(32)] = 635,
  [SMALL_STATE(33)] = 648,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 668,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 688,
  [SMALL_STATE(38)] = 697,
  [SMALL_STATE(39)] = 708,
  [SMALL_STATE(40)] = 717,
  [SMALL_STATE(41)] = 725,
  [SMALL_STATE(42)] = 732,
  [SMALL_STATE(43)] = 739,
  [SMALL_STATE(44)] = 743,
  [SMALL_STATE(45)] = 747,
  [SMALL_STATE(46)] = 751,
  [SMALL_STATE(47)] = 755,
  [SMALL_STATE(48)] = 759,
  [SMALL_STATE(49)] = 763,
  [SMALL_STATE(50)] = 767,
  [SMALL_STATE(51)] = 771,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set_content, 1, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_group, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_group, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_sequence, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_class, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_escaped, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_any, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_range, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [210] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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

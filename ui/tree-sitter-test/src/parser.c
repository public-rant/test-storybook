#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_apt = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_bool = 4,
  anon_sym_int = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_return = 8,
  anon_sym_SEMI = 9,
  sym_title = 10,
  sym_frequency = 11,
  sym_identifier = 12,
  sym_week = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym_block = 16,
  sym__statement = 17,
  sym_return_statement = 18,
  sym__expression = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_block_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_apt] = "apt",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_title] = "title",
  [sym_frequency] = "frequency",
  [sym_identifier] = "identifier",
  [sym_week] = "week",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_apt] = anon_sym_apt,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_title] = sym_title,
  [sym_frequency] = sym_frequency,
  [sym_identifier] = sym_identifier,
  [sym_week] = sym_week,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_apt] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_frequency] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_week] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(1);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(1);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'M' ||
          lookahead == 'W' ||
          lookahead == 'Y' ||
          lookahead == '|') ADVANCE(29);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_apt);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_title);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_frequency);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_week);
      if (lookahead == 'M' ||
          lookahead == 'W' ||
          lookahead == 'Y' ||
          lookahead == '|') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_week);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_apt] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_frequency] = ACTIONS(1),
    [sym_week] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__definition] = STATE(5),
    [sym_block] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 2,
      sym_title,
      sym_frequency,
    STATE(3), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_title,
      sym_frequency,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [32] = 4,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(24), 2,
      sym_title,
      sym_frequency,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [48] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(6), 3,
      sym__definition,
      sym_block,
      aux_sym_source_file_repeat1,
  [63] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(6), 3,
      sym__definition,
      sym_block,
      aux_sym_source_file_repeat1,
  [78] = 1,
    ACTIONS(39), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_title,
      sym_frequency,
  [85] = 1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_identifier,
  [91] = 2,
    STATE(12), 1,
      sym__expression,
    ACTIONS(43), 2,
      sym_identifier,
      sym_week,
  [99] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_identifier,
  [105] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [109] = 1,
    ACTIONS(49), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_YOUR_LANGUAGE_NAME(void) {
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

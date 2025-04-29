package tree_sitter_lua_patterns_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_lua_patterns "github.com/oxy2dev/tree-sitter-lua_patterns/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lua_patterns.Language())
	if language == nil {
		t.Errorf("Error loading LuaPatterns grammar")
	}
}

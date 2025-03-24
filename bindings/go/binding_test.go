package tree_sitter_wit_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_wit "github.com/liamwh/tree-sitter-wit/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_wit.Language())
	if language == nil {
		t.Errorf("Error loading Wit grammar")
	}
}

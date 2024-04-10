#!/usr/bin/env -S just --justfile
# ^ A shebang isn't required, but allows a justfile to be executed
#   like a script, with `./justfile test`, for example.

# Show available commands
default:
    @just --list --justfile {{justfile()}}

# Generate the c parser from the grammar.
generate:
    tree-sitter generate


# Build to Wasm
build:
    tree-sitter build --wasm --output ./build/parser.wasm .

# Test the parser
test: generate
    tree-sitter test

# Install the queries locally
install-local:
    rm -rf ~/.local/share/nvim/lazy/nvim-treesitter/queries/wit
    cp -r ./queries ~/.local/share/nvim/lazy/nvim-treesitter/queries/wit

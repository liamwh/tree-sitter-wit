# Tree-Sitter Grammar for WebAssembly Interface Types (.wit) files

For a reference of the [WIT spec](https://github.com/WebAssembly/component-model/blob/main/design/mvp/WIT.md), please see the [WIT Cheatsheet](https://cosmonic.com/downloads/WIT-Cheatsheet-v1.2.pdf) by [Cosmonic](https://cosmonic.com/).

This grammar is intended to be used with the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) parsing library. Please be aware that it is already functional, but it is a work-in-progress and not yet feature complete.

## Features

- [X] Primitive Types: (`bool`, `s8`, `u8`, `float32`...)
- [X] Container Types: (`tuple`, `list`, `option`, `result`)
- [X] Named types: (`record`, `enum`, `variant`, `flags`, `func`, `resource`)
- [ ] Imports/Exports (work-in-progress): (`include`, `use`, `using`, `import`, `export`, `world`, `.`, `package`)
- [ ] Modifiers / Resource Keywords (work-in-progress): (`constructor`, `static`, `self`, `borrow`, `owned`)

## Installation

### Neovim

Neovim users can use the [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) plugin to install the grammar.

#### Using [Lazy.nvim](https://github.com/folke/lazy.nvim) package manager

1. Add the following to your Lua configuration:

    ```lua
    return {
      "nvim-treesitter/nvim-treesitter",
      opts = {
          ensure_installed = {
              "wit",
          }
      }
    }
    ```

#### Manual Installation

1. Add the following to your init.lua:

    ```lua
    local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
    parser_config.wit = {
      install_info = {
        url = "https://github.com/liamwh/tree-sitter-wit",
        files = { "src/parser.c" },
        maintainers = { "@liamwh" },
        branch = "main",
      }
    }
    ```

1. Clone the repo
1. Ensure you have just installed
1. Then run `just install-local` from the root of the repo; this will copy the queries into the directory used by Neovim
1. Then in Neovim run TSInstall wit
1. And you should enjoy the syntax highlighting! Please let me know if this works for you 😊

## Contributing

Please see the [CONTRIBUTING.md](CONTRIBUTING.md) file for more information.

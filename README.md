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

### Neovim (Coming Soon, see [PR](https://github.com/nvim-treesitter/nvim-treesitter/pull/6428))

Neovim users can use the [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) plugin to install the grammar.

#### Using [Lazy.nvim](https://github.com/folke/lazy.nvim)

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

## Contributing

The docs on creating tree-sitter grammars / parsers can be [found here](https://tree-sitter.github.io/tree-sitter/creating-parsers).

In summary, you need to create tests in `test/corpus`, then modify the `grammar.js` file to ensure it passes. You can use the `justfile` command to re-generate and run the tests:

```sh
just test
```

Additional justfile commands are available and can be viewed by simply running `just`.

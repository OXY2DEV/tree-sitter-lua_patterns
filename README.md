# tree-sitter-lua_patterns

[![CI][ci]](https://github.com/tree-sitter/tree-sitter-lua_patterns/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)

Lua patterns grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

[ci]: https://img.shields.io/github/actions/workflow/status/OXY2DEV/tree-sitter-lua_patterns/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix

## 📥 Installation

### 💡 nvim-treesitter

Now, put this in your `nvim-treesitter` config,

```lua
local parser_configs = require("nvim-treesitter.parsers").get_parser_configs();

parser_configs.lua_patterns = {
    install_info = {
        url = "https://github.com/OXY2DEV/tree-sitter-lua_patterns",
          files = { "src/parser.c" },
          branch = "main",
        },
    }
}
```

Now, quit & open Neovim and run this command,

```vim
:TSInstall lua_patterns
```

### 💡 manual

Copy the `lua_patterns.so` file to `~/.config/nvim/parser/`.

## 💥 Syntax highlighting

First clone this repository to your machine. I cloned it to `~/.config/nvim/parsers/nvim-treesitter-lua_patterns`.

> Or just copy the `highlights.scm` file to `~/.config/nvim/queries/lua_patterns/highlights.scm`.

To get syntax highlighting you need to copy the `queries/highlights.scm` to `~/.config/nvim/queries/lua_patterns/`.


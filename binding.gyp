{
  "targets": [
    {
      "target_name": "tree_sitter_wit_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
      ],
      "include_dirs": [
        "src",
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
        # NOTE: if your language uses an external scanner, uncomment this block:
      ],
      "cflags_c": [
        "-std=c11",
      ],
    }
  ]
}

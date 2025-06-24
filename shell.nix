{
  pkgs ? import <nixpkgs> { },
}:

pkgs.mkShell {
  packages = [
    pkgs.nodejs
    pkgs.python3

    pkgs.tree-sitter
    pkgs.editorconfig-checker

    pkgs.rustc
    pkgs.cargo

    # Formatters just prettier for now
    pkgs.nodePackages.prettier
  ];
}

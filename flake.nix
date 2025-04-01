# based off of github.com/nickel-lang/tree-sitter-nickel/blob/aeac4/flake.nix
{
  description = "A tree-sitter grammar for OpenSCAD";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  };

  outputs =
    { self, nixpkgs, ... }@inputs:
    let
      version = "1.1.0";

      # Matches pkgs.tree-sitter
      supportedSystems = [
        "aarch64-darwin"
        "aarch64-linux"
        "i686-linux"
        "x86_64-darwin"
        "x86_64-linux"
      ];

      pkgsFor = nixpkgs.lib.genAttrs supportedSystems (
        system:
        import nixpkgs {
          inherit system;
        }
      );

      forAllSystems =
        fn:
        nixpkgs.lib.genAttrs supportedSystems (
          system:
          fn rec {
            inherit system;
            pkgs = pkgsFor.${system};
            inherit (pkgs) lib;
          }
        );
    in
    {
      overlays = {
        tree-sitter-grammars = final: prev: {
          tree-sitter-grammars = prev.tree-sitter-grammars // {
            tree-sitter-wit = self.packages.${prev.system}.tree-sitter-wit;
          };
        };
      };

      packages = forAllSystems (
        { system, pkgs, ... }:
        {
          tree-sitter-wit =
            pkgs.callPackage (nixpkgs + "/pkgs/development/tools/parsing/tree-sitter/grammar.nix") { }
              {
                language = "wit";
                src = ./.;
                inherit version;
              };

          default = self.packages.${system}.tree-sitter-wit;
        }
      );

      devShells = forAllSystems (
        { system, pkgs, ... }:
        {
          default = pkgs.mkShell {
            inputsFrom = builtins.concatMap builtins.attrValues [
              self.checks.${system}
              self.packages.${system}
            ];
            env = {
              npm_config_build_from_source = true;
            };
          };
        }
      );

      checks = forAllSystems (
        { pkgs, ... }:
        {
          default = pkgs.stdenv.mkDerivation {
            pname = "tree-sitter-wit-test";
            inherit version;

            src = self;

            nativeBuildInputs = [
              pkgs.nodejs_latest
              pkgs.tree-sitter
              pkgs.clang
            ];

            buildPhase = ''
              echo 'Running corpus tests'
              HOME=$(mktemp -d) tree-sitter test
            '';

            # Write nothing to the store
            installPhase = "touch $out";
          };
        }
      );
    };
}

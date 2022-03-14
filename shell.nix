let
  nixpkgs = import (builtins.fetchTarball {
    name = "nixos-unstable";
    url = "https://github.com/nixos/nixpkgs/archive/e9545762b032559c27d8ec9141ed63ceca1aa1ac.tar.gz";
    sha256 = "sha256:1v819ax9yznj95q8yw2ddzkdcjp8psqznygxjbmrjv7fadmyv0h1";
  });
in
{ pkgs ? nixpkgs { config = {}; overlays = []; } }:
with pkgs;
mkShell {
  buildInputs = [
    bazel_5
    cacert
    nix
    git
  ];
}

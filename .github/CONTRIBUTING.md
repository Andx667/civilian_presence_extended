# Contributing Setup & Guidelines

## Setting up the Development Environment

### 1. Clone the repository from GitHub

### 2. Install HEMTT

The latest version of HEMTT can be installed by running:

```cmd
winget install hemtt
```

## Coding Guidelines

This mod follows the same coding guidelines as the ACE3 mod, which can be found [here](https://ace3.acemod.org/wiki/development/coding-guidelines).

## Keeping Documentation in Sync

A code change isn't done until its supporting files are updated in the same PR. Before requesting review (contributor or LLM), check:

- **[CHANGELOG.md](../CHANGELOG.md)** — add an entry under `[Unreleased]` (Keep a Changelog format).
- **README.md** — update it if the change affects features or usage.
- **PR label** — apply the matching `changelog/*` label so release-drafter groups it correctly.

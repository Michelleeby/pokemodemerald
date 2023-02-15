# 👋 Welcome to Pokémod Emerald

## 📖 Table of Contents

- [📝 Introduction](#-introduction)
- [📚 Installation](#-installation)
- [🪵 Branches](#-branches)
- [🚧 Development](#-development)

## 📝 Introduction

In the world of Pokémod Emerald, you find yourself alone, in the back of a moving truck, already knowing who you are. You're May. The daughter of Norman, the gym leader of Petalburg City. Soon to be trainer. Someday, champion.

## 📚 Installation

Please refer to the [Installation Guide](INSTALL.md) for detailed instructions on how to install Pokémod Emerald. Please note that you'll want to build from the `game` branch instead of `main`.

### Installing a specific mod

```bash
git remote add michelleeby https://github.com/Michelleeby/pokemodemerald.git
```

```bash
git pull michelleeby mod
```

For more information about a mod, have a look at its [closed Pull Request](https://github.com/Michelleeby/pokemodemerald/pulls?q=is%3Apr+is%3Aclosed+label%3Amod).

## 🪵 Branches

Pokémod Emerald has two major branches: `main` and `game`. The `main` branch is in sync with pret's `master` branch, and is used as the base for all `mod` branches and the `game` branch.

The `game` branch is an aggregate of all `mod` branches. To merge a `mod` branch into `game`, first create a new branch from `mod`, `mod-built`, and merge `game` into `mod-built`. Then, merge `mod-built` into `game`. This method ensures that the `mod` branch stays in sync with `main`:

![branching workflow](assets/branching-workflow.jpg)

## 🚧 Development

### 🎨 Graphics

- [x] Add daynight system
- [x] Add dynamic overworld palettes
- [x] Add attack type battle icons
- [ ] Add nature colored stats
- [ ] Add item description headers
- [ ] Add type effectiveness shows in battle
- [ ] Add custom battle mugshots
- [ ] Add map description headers
- [ ] Develop daynight system, add window lighting overrides.
- [x] Develop daynight system, time of day affects battle scene.

### 🎮 Gameplay

- [ ] Add saveblock expansion
- [ ] Add DexNav
- [ ] Add HGSS-style Pokédex
- [ ] Add reusable TMs
- [ ] Add HM items
- [ ] Add item alternatives for trade evolutions
- [ ] Add modern repel system
- [ ] Add remove Pokémon data encryption
- [ ] Add nature mints
- [ ] Add access to the PC from the start menu
- [ ] Add Generation 6-style experience share
- [ ] Develop daynight system, update wild Pokémon found during the `morning`, `day`, and `night`

### ⚙️ Core mechanics

- [ ] Add dynamic wild Pokémon levels
- [ ] Add dynamic trainer levels
- [ ] Add modern moves and movesets
- [ ] Develop daynight system, add an `attack` and `defense` buff to wild Pokémon found during the `night`
- [ ] Develop daynight system, add a `special attack` and `special defense` buff to wild Pokémon found during the `morning`
- [ ] Develop DexNav, hook into dynamic wild Pokémon leveling

### 📖 Story

- [ ] Remove character creation and begin game with May
- [ ] May Chapter 1 - Littleroot Town
- [ ] May Chapter 2 - Pelaburg gym
- [ ] May Chapter 3 - Champion's Match
- [ ] May Chapter 4 - Battle Frontier

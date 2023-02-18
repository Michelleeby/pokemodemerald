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
- [x] Develop daynight system, time of day affects battle scene.
- [x] Add nature colored stats
- [x] Add type effectiveness shows in battle
- [x] Add item description headers
- [x] Add map description headers
- [x] Add custom battle mugshots
- [ ] Develop daynight system, add window lighting overrides.

### 🎮 Gameplay

- [x] Add HM items
- [x] Add item alternatives for trade evolutions
- [ ] Add modern repel system
- [ ] Add reusable TMs
- [ ] Add access to the PC from the start menu
- [ ] Add Generation 6-style experience share
- [ ] Add saveblock expansion
- [ ] Add DexNav
- [ ] Add HGSS-style Pokédex
- [ ] Add remove Pokémon data encryption
- [ ] Add nature mints
- [ ] Develop daynight system, update wild Pokémon found during the `morning`, `day`, and `night`

### ⚙️ Core mechanics

- [x] Add dynamic wild Pokémon levels
- [x] Add dynamic trainer levels
- [ ] Develop daynight system, add an `attack` and `defense` buff to wild Pokémon found during the `night`
- [ ] Develop daynight system, add a `special attack` and `special defense` buff to wild Pokémon found during the `morning`
- [ ] Develop DexNav, hook into dynamic wild Pokémon leveling

### 📖 Story

- [ ] Remove character creation and begin game with May
- [ ] May Chapter 1 - Littleroot Town
- [ ] May Chapter 2 - Petalburg gym
- [ ] May Chapter 3 - Champions
- [ ] May Chapter 4 - Battle Frontier

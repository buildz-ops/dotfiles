# My dotfiles

This directory contains the dotfiles for my Arch Linux system

## Requirements

Ensure you have the following installed on your system

### Git

```
pacman -S git
```

### Stow

```
pacman -S stow
```

## Installation

First, clone the dotfiles repo in your $HOME directory using git

```
$ git clone [git@github.com:buildz-ops/dotfiles.git]
$ cd dotfiles
```

then use GNU stow to create the symlinks

```
$ stow .
```

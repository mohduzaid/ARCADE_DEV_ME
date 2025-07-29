# ARCADE_DEV_ME
# C Games Collection – Mini Projects in C

## Overview
This project is a collection of three simple yet educational games developed using the C programming language. Each game is designed to enhance logical thinking and demonstrate practical implementation of programming fundamentals.

The project includes:
- 🟦 Tic Tac Toe
- 🎲 Random Number Guessing Game
- 🐍 Snake Water Gun Game

These mini-projects were created as part of my programming practice during the second year of B.Tech in Electronics Engineering.

## Games Included

### 1. Tic Tac Toe
A classic two-player turn-based board game. Players take turns marking the spaces in a 3×3 grid. The first player to align three of their marks in a row (vertically, horizontally, or diagonally) wins.

*Concepts Used:*
- 2D Arrays
- Looping structures
- Conditional logic
- Function decomposition

---

### 2. Random Number Guessing Game
The computer randomly selects a number, and the user has to guess it. The system provides hints whether the guess is too high or too low until the correct number is found.

*Concepts Used:*
- Random number generation using rand() and srand()
- User input
- Loop control and conditions

---

### 3. Snake Water Gun
A simplified version of Rock Paper Scissors. The user plays against the computer, which selects a move at random. The outcome is based on fixed winning rules:
- Snake drinks Water → Snake wins
- Water drowns Gun → Water wins
- Gun kills Snake → Gun wins

*Concepts Used:*
- Random selection
- Game logic through if-else conditions
- Character handling

---

## How to Compile & Run

### Using GCC:
```bash
gcc games_collection.c -o games
./games

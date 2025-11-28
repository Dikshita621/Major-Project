# Modern Periodic Table in C

This is a command-line C program that allows users to look up details about chemical elements by either entering the atomic number or the element name/symbol.

## Features
- Search elements by atomic number (1-118)
- Search elements by name or symbol (case-insensitive)
- Display a list of all elements with atomic number, symbol, and name

## Project Structure
- `src/` : Source code files (`main.c`, `element.c`)
- `include/` : Header file for element structure and function prototypes (`element.h`)
- `docs/` : Documentation and report files
- `assets/` : (Optional) Screenshots or additional resources

## How to compile and run
Use GCC to compile the program:

gcc src/main.c src/element.c -Iinclude -o periodic_table
./periodic_table

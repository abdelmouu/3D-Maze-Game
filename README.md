# 3D Maze Game

## Description
The Maze is an immersive 3D game where players spawn at the center of a complex labyrinth. Using raycasting technology inspired by classic games like Wolfenstein 3D, players navigate through the maze using arrow keys. The catch? There's no exit! How long can you explore before the claustrophobia sets in?

## How to Play

1. Install the SDL2 library on your system.
2. Clone this repository:
   ```
   git clone https://github.com/abdelmouu/3D-Maze-Game
   ```
3. Navigate to the project directory:
   ```
   cd The_Maze
   ```
4. Compile the game using the provided Makefile:
   ```
   make
   ```
5. Run the game:
   ```
   make run
   ```
   Alternatively, you can directly execute the binary:
   ```
   ./The_Maze
   ```
6. Use the arrow keys to move through the maze.

## Game Controls
- ↑: Move forward
- ↓: Move backward
- ←: Turn left
- →: Turn right

## What is The Maze?
The Maze is a game in which the player spawns at the center of the map and is locked in a maze 
(I had quite the inspiration for the project name, right?). 

## Inspiration
The Maze project is directly inspired by the famous game Wolfenstein 3D. Developed by id Software in 1992,
Wolfenstein 3D was created without a game engine, which is exactly what was needed for this project.
It showcases the power of low-level graphics programming and serves as an excellent learning tool for aspiring game developers.

## How to Develop Without a Game Engine
To create this game, the C programming language was chosen due to prior familiarity
(though C++ could have been an option).
The crucial component for developing a game without an engine is the SDL (Simple DirectMedia Layer) library.

SDL was instrumental in:
- Creating a window
- Rendering shapes, colors, and textures
- Handling user input

SDL Website: https://www.libsdl.org/download-2.0.php

## Technical Implementation
- **Language**: C
- **Graphics Library**: SDL2
- **Rendering Technique**: Raycasting

## Future Enhancements
While The Maze offers an engaging experience in its current form, there are several potential areas for expansion:
- Implementing an exit/end game condition
- Adding collectible objects
- Introducing enemies and combat mechanics (similar to Wolfenstein 3D)
- Environmental effects like rain
- Expanded maze generation algorithms

The possibilities are limited only by imagination and skills!

## Sources and References
- [SDL Official Website](https://www.libsdl.org/download-2.0.php)
- [Raycasting Tutorial](https://lodev.org/cgtutor/raycasting.html)
- [Trigonometry Fundamentals](https://www.mathsisfun.com/algebra/trigonometry.html)
- [UPNG Library](https://github.com/elanthis/upng)

Additional resources include various YouTube tutorials and documentation.

## Installation

### Prerequisites
- SDL2 library

### Steps
1. Install SDL2 (platform-specific instructions)
2. Clone the repository
3. Compile using the provided Makefile
4. Run the game

## Author

Abdallah moumni

Taha Hassane


## Acknowledgements
Special thanks to the SDL community, the authors of the referenced tutorials, and the pioneers of early
3D game development who inspired this project.

build:
	gcc src/*.c -Iheaders -Wall -Werror -Wextra -std=gnu89 -pedantic `sdl2-config --cflags --libs` -lm -o 3D-Maze-Game
run:
	./3D-Maze-Game

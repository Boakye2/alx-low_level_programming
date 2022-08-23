#!/usr/bin/python3


def island_perimeter(grid):
    """
    island_perimeter: returns the preimeter of the island described in grid.

    @grid(list): a list of lists of integers.
    """
    i = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                i += 4
                if y > 0:
                    if grid[y - 1][x] != 0:
                        i -= 1
                if y < len(grid) - 1:
                    if grid[y + 1][x] != 0:
                        i -= 1
                if x > 0:
                    if grid[y][x - 1] != 0:
                        i -= 1
                if x < len(grid[0]) - 1:
                    if grid[y][x + 1] != 0:
                        i -= 1
    return i

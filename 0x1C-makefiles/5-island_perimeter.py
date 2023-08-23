#!/usr/bin/python3
""" This module contains a function island_perimeter """


def island_perimeter(grid):
    """ This function returns the perimeter of island described
    in grid. grid is a list of ints:
       -0 represents a water zone
       -1 represents a land zone
       -One cell is a square with side length 1
       -Grid cells are connected horizontally/vertically (not diagonally)
       -Grid is rectangular, width and height don’t exceed 100
    the grid is surrounded completely by water, there is either one
    island or nothing.
    The island doesn't have lakes
    """
    if len(grid) <= 100:
        if len(grid[0]) <= 100:
            for i in grid:
                if i[0] == 0 and i[len(i) - 1] == 0:
                    for x in range(len(i) - 2):
                        x += 1
                    for y in range(len(grid) - 2):
                        y += 1

    return x * y


if __name__ == "__main__":
    island_perimeter(grid)

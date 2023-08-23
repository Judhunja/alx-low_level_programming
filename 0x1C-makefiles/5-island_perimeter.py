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
    if len(grid) <= 100 and len(grid[0]) <= 100:
        row = len(grid)
        columns = len(grid[0])

        per = 0

        for x in range(row):
            for y in range(columns):
                if grid[x][y] == 1:
                    per += 4

                    if x > 0 and grid[x - 1][y] == 1:
                        per -= 1
                    if x < row - 1 and grid[x + 1][y] == 1:
                        per -= 1
                    if y > 0 and grid[x][y - 1] == 1:
                        per -= 1
                    if y < columns - 1 and grid[x][y + 1] == 1:
                        per -= 1

        return per


if __name__ == "__main__":
    island_perimeter(grid)

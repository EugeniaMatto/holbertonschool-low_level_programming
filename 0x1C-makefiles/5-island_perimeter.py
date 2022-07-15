#!/usr/bin/python3
""" Ex 5. Island Perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island """
    len_g = len(grid)
    len_f = len(grid[0])
    mts = 0

    for i in range(len_g):
        for j in range(len_f):
            if grid[i][j] == 1:
                if j == 0 or grid[i][j - 1] == 0:
                    mts = mts + 1
                if j == (len_f - 1) or grid[i][j + 1] == 0:
                    mts = mts + 1
                if i == 0 or grid[i - 1][j] == 0:
                    mts = mts + 1
                if i == (len_g - 1) or grid[i + 1][j] == 0:
                    mts = mts + 1

    return mts

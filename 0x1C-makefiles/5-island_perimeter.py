#!/usr/bin/python3
"""
island_perimeter module calculates the perimeter of an island
"""


def island_perimeter(grid):
    """ A function that calculates the perimeter of an island """

    perimeters = [4, 3, 2, 1, 0]
    ret_perim = 0
    conn_count = 0
    row, cell = 0, 0

    while row < len(grid):
        cell = 0
        while cell < len(grid[row]):
            if grid[row][cell] == 1:
                conn_count = 0
                # check cell left of current
                if cell > 0 and grid[row][cell - 1] == 1:
                    conn_count += 1
                # check cell right of current
                if cell < len(grid[row]) - 1 and grid[row][cell + 1] == 1:
                    conn_count += 1
                # check cell below current
                if row < len(grid) - 1 and grid[row + 1][cell] == 1:
                    conn_count += 1
                # check cell above current
                if row > 0 and grid[row - 1][cell] == 1:
                    conn_count += 1
                ret_perim += perimeters[conn_count]
            cell = cell + 1
        row = row + 1

    return(ret_perim)

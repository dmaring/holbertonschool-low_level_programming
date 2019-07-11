#!/usr/bin/python3
"""
island_perimeter module calculates the perimeter of an island
"""


def island_perimeter(grid):
    """ A function that calculates the perimeter of an island """

    perimeters = [4, 3, 2, 1, 0]
    ret_perim = 0
    conn_count = 0
    row, cell = 1, 1

    while row < len(grid) - 1:
        cell = 0
        while cell < len(grid[row]) - 1:
            if grid[row][cell] == 1:
                conn_count = 0
                # check above, below, left, right of cell
                if grid[row][cell - 1] == 1:
                    conn_count += 1
                if grid[row][cell + 1] == 1:
                    conn_count += 1
                if grid[row - 1][cell] == 1:
                    conn_count += 1
                if grid[row + 1][cell] == 1:
                    conn_count += 1
                ret_perim += perimeters[conn_count]
            cell = cell + 1
        row = row + 1

    return(ret_perim)

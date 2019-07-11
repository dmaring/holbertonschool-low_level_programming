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

                # check if row is first or very last grid
                if row == 0 or row == len(grid) - 1:
                    conn_count += 1
                # check if cell is first or last in row
                if cell == 0 or cell == len(grid[row]) - 1:
                    conn_count += 1
                # check above, below, left, right of cell
                if cell > 0 and grid[row][cell - 1] == 1:
                    conn_count += 1
                if cell < len(grid[row]) and grid[row][cell + 1] == 1:
                    conn_count += 1
                if row < len(grid[row]) and grid[row - 1][cell] == 1:
                    conn_count += 1
                if row > 0 and grid[row + 1][cell] == 1:
                    conn_count += 1
                ret_perim += perimeters[conn_count]
            cell = cell + 1
        row = row + 1

    return(ret_perim)

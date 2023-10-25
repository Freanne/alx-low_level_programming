#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.
    :param grid: A list of lists of integers representing the island.
    :return: The perimeter of the island.
    """
    perimeter = 0

    # Iterate through each cell in the grid
    for row in range(len(grid)):
        for col in range(len(grid[0]):
            if grid[row][col] == 1:
                # For each land cell, add 4 to the perimeter
                perimeter += 4

                # Check adjacent cells (up, down, left, right)
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter

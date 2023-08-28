""" Create a function thats returns the perimeter of the island """

def island_perimeter(grid):
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with a perimeter of 4 for each land cell

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 for each shared side (left side of current cell, right side of left neighbor)

                # Check upper neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for each shared side (upper side of current cell, lower side of upper neighbor)

    return perimeter

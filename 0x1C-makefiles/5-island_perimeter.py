#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    - grid: a list of list of integers representing the island

    Returns:
    - perimeter: the perimeter of the island
    """
    if not grid or len(grid) == 0:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter

# Uncomment the following lines to test the function
# grid = [
#     [0, 0, 0, 0, 0, 0],
#     [0, 1, 0, 0, 0, 0],
#     [0, 1, 0, 0, 0, 0],
#     [0, 1, 1, 1, 0, 0],
#     [0, 0, 0, 0, 0, 0]
# ]
# print(island_perimeter(grid))

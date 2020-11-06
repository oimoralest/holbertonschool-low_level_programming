#!/usr/bin/python3
"""
This modules defines de island_perimeter function
"""


def island_perimeter(grid):
    """Computes the perimeter of an island

    Args:
        grid (list[list[int]]): list of list of integer which 0 represents
        water and 1 represents land

    Returns:
        [int]: perimeter of the island
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0:
                    perimeter += 1
                elif grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0:
                    perimeter += 1
                elif grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1:
                    perimeter += 1
                elif grid[i][j + 1] == 0:
                    perimeter += 1
                if i == len(grid) - 1:
                    perimeter += 1
                elif grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 1, 1],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

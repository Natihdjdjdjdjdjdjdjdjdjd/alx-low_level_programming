#!/usr/bin/python3
"""Let defines an island perimeter measuring function."""


def island_perimeter(grid):
    """the perimiter of an island.

    The grid represents water by 0 and land by 1.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for n in range(height):
        for m in range(width):
            if grid[n][m] == 1:
                size += 1
                if (m > 0 and grid[n][m - 1] == 1):
                    edges += 1
                if (n > 0 and grid[n - 1][m] == 1):
                    edges += 1
    return size * 4 - edges * 2

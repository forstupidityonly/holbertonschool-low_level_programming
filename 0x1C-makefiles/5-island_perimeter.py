#!/usr/bin/python3
"""to find perimeeter of 'island' on grid"""
def island_perimeter(grid):
	"""look im not gonna lose points bc it says without google,
	tried and failed googled and learned"""
	d = 0
	perimeter = 0
	height = len(grid)
	length = len(grid[0])
	for collum in grid:
		c = 0

		for row in collum:
			if row == 1:
				surround = 4
				if c != length - 1:
					if grid[d][c + 1] == 1:
						surround -= 1
				if c != 0:
					if grid[d][c - 1] == 1:
						surround -= 1
				if d != height - 1:
					if grid[d + 1][c] == 1:
						surround -= 1
				if d != 0:
					if grid[d - 1][c] == 1:
						surround -= 1
				perimeter += surround
			c += 1
		d += 1
	return perimeter

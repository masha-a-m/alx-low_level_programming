#!usr/bin/python3

"""this task 5 is createsto sefine a set of function"""

def island_perimeter(grid):


#Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

width = len(grid[0]) """fot the width"""
    
height = len(grid) """height"""

    edges = 0
    size = 0

#grid is a list of list of integers:
#0 represents a water zone


# represents a land zone
#One cell is a square with side length 1
#Grid cells are connected horizontally/vertically (not diagonally).

for i in range(height): """for every i in the range height"""

        for j in range(width):
            if grid[i][j] == 1: """for jin ramge width"""

                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
            

		  if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1


	return size * 4 - edges * 2
#Grid is rectangular, width and height don’t exceed 100
#Grid is completely surrounded by water, and there is one island (or nothing).
#The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

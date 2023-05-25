#!usr/bin/python3

"""this task 5 is createsto sefine a set of function"""

def island_perimeter(grid):

	 """new tsskv5 #grid is a list of list of integers:
 19 #0 represents a water zone
 20
 21
 22 # represents a land zone                                23 #One cell is a square with side length 1
 24 #Grid cells are connected horizontally/vertically (not     diagonally).
	 Alx
	 5 -islsnd perineter 
	 python"""

    width = len(grid[])
    
    height = len(grid)
    edges = 0
    size = 0



     for i in range(height):

         for j in range(width):
             if grid[i][j] == 1: 


                 size += 1
                 if (j > 0 and grid[i][j - 1] == 1):
                     edges += 1
            

		   if (i > 0 and grid[i - 1][j] == 1):
                     edges += 1


     return size * 4 - edges * 2

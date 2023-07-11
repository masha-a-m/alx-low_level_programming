#include "search_algos.h"

/**
  task 0
 n that searches for a value in an array of integers using the Linear search algorithm

Prototype : int linear_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array 
 */

for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
}

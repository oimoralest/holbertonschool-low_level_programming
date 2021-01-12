#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array using linear
 * search algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: The index at which value is found otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i++;
	}
	return (-1);
}

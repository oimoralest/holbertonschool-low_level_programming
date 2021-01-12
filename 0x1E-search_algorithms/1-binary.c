#include "search_algos.h"
/**
 * printSubArray - Function that prints an array between begin and end
 * @array: Pointer to the array
 * @begin: Initial position
 * @end: Final position
 * Return: void
 */
void printSubArray(int *array, size_t begin, size_t end)
{
	printf("Searching in array: ");
	while (begin <= end)
	{
		printf("%i", array[begin]);
		if (begin < end)
			printf(", ");
		begin++;
	}
	printf("\n");
}
/**
 * binary_search - Function that searches for a value in a sorted array using
 * the binary search algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: The index at which value is found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m = 0;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printSubArray(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

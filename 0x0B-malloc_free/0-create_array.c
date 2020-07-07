#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - creates an array of chars, and initializes it with a specific
 *char
 *@size: size of the array
 *@c: specific char to initialize the array
 *
 *Return: NULL if @size is equalo to zero or if the creation fails
 *        ptr pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(char));
	if (ptr != NULL)
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}

	return (size == 0 ? NULL : ptr);
}

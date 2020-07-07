#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory, which
 *contains a copy of the string given as a parameter
 *@str: pointer to string given
 *
 *Return: NULL if @str = NULL or if the memory allocation fails
 *        ptr pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	ptr = malloc(_size(str) * sizeof(char));
	if (ptr != NULL)
		while (i < _size(ptr))
		{
			ptr[i] = str[i];
			i++;
		}

	return (str == NULL ? NULL : ptr);
}
/**
 *_size - returns the length of a string
 *@str: pointer to the string to get its length
 *
 *Return: s size of the string
 */
unsigned int _size(char *str)
{
	unsigned int s = 0;

	while (str[s++] != '\0')
		;
	return (str == NULL ? 0 : s);
}

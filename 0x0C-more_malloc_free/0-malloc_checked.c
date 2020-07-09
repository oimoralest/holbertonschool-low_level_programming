#include "holberton.h"
#include <stdlib.h>
/**
  *malloc_checked - allocated memory
  *@b: integer.
  *Return: ptr or exit 98.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}

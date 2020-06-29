#include "holberton.h"

/**
 *_memcpy - copies memory area
 *@dest: memory area to copy to
 *@src: memory area to copy from
 *@n: number of bytes to copy
 *
 *Return: dest (memory area modified)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	return (dest);
}

#include "holberton.h"

/**
 *_strncpy - copies a string
 *@src: pointer source
 *@dest: pointer destiny
 *@n: byte size to use from src
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && (dest[i] = src[i]) != '\0')
		i++;
	return (dest);
}

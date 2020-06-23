#include "holberton.h"
/**
 *_strcpy - copies the strings src to string dest
 *@dest: pointer to the first string
 *@src: pointer to the second string
 *
 *Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
		i++;
	return (dest);
}

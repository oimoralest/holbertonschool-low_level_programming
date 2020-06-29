#include "holberton.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@accept: set of bytes
 *@s: string to search into
 *
 *Return: s pointer to the byte in @s that matches one of te bytes in @accept
 *        NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == accept[i])
			break;
		else if (accept[i] != '\0')
			i++;
		else
		{
			s++;
			i = 0;
		}
	}

	return (*s != '\0' ? s : '\0');
}

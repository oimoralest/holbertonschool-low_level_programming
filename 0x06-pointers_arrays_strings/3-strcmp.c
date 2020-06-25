#include "holberton.h"

/**
 *_strcmp - compares two strings
 *@s1: first string to compare with...
 *@s2: second string
 *
 *Return: (*s1 - *s2) the difference between both strings
 *         0 if both are equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (0);
}

#include "holberton.h"

/**
 *_strcmp - compares two strings
 *@s1: first string to compare with...
 *@s2: second string
 *
 *Return: 15 if s1 is greater than s2
 *         0 if both are equal
 *       -15 if s1 is smaller than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (-15);
	else if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (15);
}

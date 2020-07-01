#include "holberton.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: pointer to the string
 *
 *Return: len length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1) + 1;

	return (len);
}

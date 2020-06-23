#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *@s: pointer to the string
 *
 *Return: length of the string
 */
int _strlen(char *s)
{
	int c = 0;
	char ch;

	while ((ch = *(s + c)) != '\0')
	{
		c++;
	}

	return (c);
}

#include "holberton.h"
/**
 *puts2 - prints every other character of a string, starting with the first
 *character
 *@str: pointer to the string
 *
 *Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c += 2;
	}
	_putchar('\n');
}

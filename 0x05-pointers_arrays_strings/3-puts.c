#include "holberton.h"
/**
 *_puts - prints a string
 *@str: pointer to the string
 *
 *Return: void
 */
void _puts(char *str)
{
	int c = 0;
	char ch;

	while ((ch = *(str + c)) != '\0')
	{
		_putchar(ch);
		c++;
	}
	_putchar('\n');
}

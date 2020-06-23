#include "holberton.h"
/**
 *puts_half - prints half of a string
 *@str: pointer to the string
 *
 *Return: void
 */
void puts_half(char *str)
{
	int len, c;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 != 0)
		c = len / 2 + 1;
	else
		c = len / 2;
	for (; *(str + c) != '\0'; c++)
		_putchar(*(str + c));
	_putchar('\n');
}

#include "holberton.h"
/**
 *print_line - draws a straight line
 *@n: number of times the character _ will be printed
 *Description: description
 *
 *Return: void
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}

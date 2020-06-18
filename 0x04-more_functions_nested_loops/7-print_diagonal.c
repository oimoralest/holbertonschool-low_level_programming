#include "holberton.h"
/**
 *print_diagonal - draws a diagonal line
 *@n: times the character \ will be printed
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
		for (j = 0; j < n; ++j)
		{
			for (i = 0; i < j; ++i)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
}

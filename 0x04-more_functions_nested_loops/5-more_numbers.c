#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 *
 *Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j <= 9; ++j)
			_putchar(j + '0');
		for (j = 0; j <= 4; ++j)
		{
			_putchar('1');
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}

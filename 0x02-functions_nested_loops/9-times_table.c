#include "holberton.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *
 *Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if ((j * i) >= 10)
				_putchar(((j * i) / 10) + '0');
			else
				_putchar(' ');
			_putchar(((j * i) % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

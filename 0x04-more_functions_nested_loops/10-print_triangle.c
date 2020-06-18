#include "holberton.h"
/**
 *print_triangle - prints a triangle
 *@size: size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			j = size - i;
			for (; j > 0; j--)
				_putchar(' ');
			j = size - (size - i);
			for (; j > 0; j--)
				_putchar('#');
			_putchar('\n');
		}
	}
}

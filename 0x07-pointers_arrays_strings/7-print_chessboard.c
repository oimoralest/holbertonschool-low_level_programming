#include "holberton.h"

/**
 *print_chessboard - print the chessboard
 *@a: multi-dimensional array with the characters to print
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

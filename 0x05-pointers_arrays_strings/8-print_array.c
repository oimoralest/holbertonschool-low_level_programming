#include <stdio.h>
#include "holberton.h"
/**
 *print_array - prints n elements of an array of integers
 *@a: pointer to the array
 *@n: number of elements to be printed
 *
 *Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c != n - 1)
			printf("%d, ", a[c]);
		else
			printf("%d\n", a[c]);
	}
}

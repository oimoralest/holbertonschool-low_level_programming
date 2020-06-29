#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: square matrix
 *@size: size of the matrix
 *
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	long sum1, sum2;
	int i;

	sum1 = sum2 = i = 0;
	while (i < size)
	{
		sum1 += a[0 + (size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%li, %li\n", sum1, sum2);
}

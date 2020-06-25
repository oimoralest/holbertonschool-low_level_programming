#include "holberton.h"
/**
 *reverse_array - reverse th content of an array o f integers
 *@a: array to reverse
 *@n: size of the array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	n -= 1;
	while (n > i)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}

#include "holberton.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int _aux = n;
	int j = 0;

	while ((_aux >>= 1) > 0)
		j++;
	while (j >= 0)
		_putchar((n >> j-- & 1) ? '1' : '0');
}

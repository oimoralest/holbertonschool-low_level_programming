#include "holberton.h"
/**
 *flip_bits - returns the number of bits you would need to flip to get from one
 *number to another
 *@n: first number
 *@m: second number
 *
 *Return: flip number of bits you need to flip n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _aux = 0;
	int length = 0, flip = 0;

	_aux = n;
	while ((_aux >>= 1) > 0)
		length++;
	_aux = m ^ n;
	while (length >= 0)
	{
		if (_aux >> length & 1)
			flip++;
		length--;
	}

	return (flip);
}

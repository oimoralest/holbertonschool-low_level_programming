#include "holberton.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: number
 *@index: index
 *
 *Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _aux = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (!(*n >> index & 1))
		;
	else
		_aux <<= index, *n ^= _aux;

	return (1);
}

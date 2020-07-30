#include "holberton.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: index
 *
 *Return: n bit at position index
 *-1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	n = (n >> index & 1) ? 1 : 0;

	return (n);
}

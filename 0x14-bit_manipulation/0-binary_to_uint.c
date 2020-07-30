#include "holberton.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: binary number as array of 0's and 1's
 *
 *Return: 0 if @b is NULL or theres another character different than 0 or 1
 *n number in unsigned int format
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b == '0' || *b == '1')
	{
		n <<= 1;
		if (*b == '1')
			n ^= 1;
		b++;
	}
	if (*b == '\0')
		return (n);

	return (0);
}

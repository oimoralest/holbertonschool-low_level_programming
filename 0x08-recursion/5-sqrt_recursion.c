#include "holberton.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to get the square root
 *
 *Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	return (_div(1, n));
}

/**
 *_div - calculates the square root of a number
 *@i: number between 1 and @n
 *@n: number to get the square root
 *
 *Return: r the square root of @n
 *        -1 if the number does not have natural square root
 */
int _div(int i, int n)
{
	int r = 0;

	r = n / i;
	return (r < i ? -1 : r == i && n % i == 0 ? r : _div(i + 1, n));
}

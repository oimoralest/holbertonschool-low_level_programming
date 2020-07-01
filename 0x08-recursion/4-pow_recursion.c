#include "holberton.h"

/**
 *_pow_recursion - returns the value of a number raised to a power
 *@x: number to raise
 *@y: power
 *
 *Return: @x raised @y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

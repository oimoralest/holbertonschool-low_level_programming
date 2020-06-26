#include "holberton.h"
#define INT_MIN -2147483648
/**
 *print_number - prints a integer
 *@n: integer to print
 *
 *Return: void
 */
void print_number(int n)
{
	int power, c, min;

	power = 10;
	c = 1;
	min = 0;
	if (n < 0)
	{
		if (n == INT_MIN)
		{
			min = 1;
			n += 1;
		}
		_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		;
	else
	{
		while (c > 0)
		{
			if ((n / power) >= 10)
			{
				power *= 10;
				c++;
			}
			else
			{
				_putchar((n / power) + '0');
				n %= power;
				power /= 10;
				c--;
			}
		}
	}
	if (min)
		n += 1;
	_putchar(n + '0');
}

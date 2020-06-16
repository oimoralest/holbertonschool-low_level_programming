#include "holberton.h"
/**
 *print_last_digit - prints the last digits of a number
 *@n: the digit to print its last digit
 *
 *Return: n the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}

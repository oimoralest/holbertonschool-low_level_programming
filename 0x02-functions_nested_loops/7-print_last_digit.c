#include <stdio.h>
#include "holberton.h"
/**
 *print_last_digit - prints the last digits of a number
 *@n: the digit to print its last digit
 *
 *Return: ld the value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n *= -1;
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}

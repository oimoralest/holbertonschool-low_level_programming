#include "holberton.h"

/**
 *is_prime_number - returns if a number is prime
 *@n: number
 *
 *Return: 1 if @n is prime
 *        2 if is not
 */

int is_prime_number(int n)
{
	return (n % 2 == 0 || n < 2 ? 0 : n == 2 ? 1 : is_prime(2, n));
}

/**
 *is_prime - calculates if a number is prime
 *@i: number between 2 and @n
 *@n: number to check if is a prime
 *
 *Return: 1 if @n is prime
 *        2 if is not
 */

int is_prime(int i, int n)
{
	return (n % i == 0 && n != i ? 0 : n == i ? 1 : is_prime(i + 1, n));
}

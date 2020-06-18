#include <stdio.h>
/**
 *main - finds and prints the largest prime factor of the number n
 *
 *Return: 0 (success)
 */
int main(void)
{
	long n = 612852475143, i, j, k, max, is_not_prime;

	is_not_prime = max = 0;
	for (i = 2; i <= n; i += 1)
	{
		k = n % i;
		if (k == 0)
			for (j = 2; j <= i; j += 1)
			{
				k = i % j;
				if (k == 0 && i != j)
				{
					is_not_prime = 1;
					i = 1;
					continue;
				}
				else if (i == j && is_not_prime == 0)
				{
					n = n / i;
					if (i > max)
						max = i;
					if (n == 1)
					{
						printf("%li\n", max);
						break;
					}
					i = 1;
					continue;
				}
			}
		is_not_prime = 0;
	}

	return (0);
}

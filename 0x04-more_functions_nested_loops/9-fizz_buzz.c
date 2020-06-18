#include <stdio.h>
/**
 *main - program that prints the numbers from 1 to 100, but for multiples of
 *three prints Fizz, multiples of five prints Buzz, multiples of both prints
 *FizzBuzz
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else if (i != 100)
			printf("%i ", i);
	}
	return (0);
}

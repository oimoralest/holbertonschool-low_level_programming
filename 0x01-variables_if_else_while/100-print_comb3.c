#include <stdio.h>
/**
 *main - entry
 *
 *Description: program that prints all possible different combinations of two
 *digits: the two digits must be different, 01 and 10 are considered the same
 *combination and print only the smallest combination
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; ++i)
	{
		for (j = i + 1; j <= 57; ++j)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

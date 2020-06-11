#include <stdio.h>
/**
 *main - entry
 *
 *Description:  program that prints all possible different combinations of
 *three digits: the three must be different 012, 120, 102, 021, 210, 201 are
 *considered the same combination, print only the smallest combination of three
 *digits
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; ++i)
	{
		for (j = i + 1; j <= 57; ++j)
		{
			for (k = j + 1; k <= 57; ++k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

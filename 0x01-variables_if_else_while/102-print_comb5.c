#include <stdio.h>
/**
 *main - entry
 *
 *Description:  program that prints all possible different combinations of
 *two two-digit numbers: 00 01 and 01 00 are considered as the same combination
 *
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			for (k = 48; k <= 57; ++k)
			{
				for (l = j; l <= 57; ++l)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 57 || k != 57 ||
					    l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

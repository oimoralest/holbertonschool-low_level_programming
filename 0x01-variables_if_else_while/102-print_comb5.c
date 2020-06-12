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
			for (k = i; k <= 57; ++k)
			{
				if (k == i)
					l = j + 1;
				else if (k > i)
					l = 48;
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57
					    || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
					++l;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

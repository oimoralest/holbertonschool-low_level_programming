#include <stdio.h>
/**
 *main - entry
 *
 *Description: description
 *
 *Return: 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
		for (n = n; n < 98; ++n)
			printf("%i, ", n);
	else if (n > 98)
		for (n = n; n > 98; --n)
			printf("%i, ", n);
	printf("98\n");
}

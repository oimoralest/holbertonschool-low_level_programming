#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints its own opcodes
 *@argc: number of arguments
 *@argv: arguments
 *
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		unsigned char (*ptr)() = ((unsigned char *)main)[i];

		printf("%02x", *ptr);
		if (i < atoi(argv[1]) - 1)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}

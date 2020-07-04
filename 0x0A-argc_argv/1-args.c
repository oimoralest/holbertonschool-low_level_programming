#include <stdio.h>

/**
 *main - prints the number of arguments supplied to the program
 *@argc: counts the arguments supplied to the program
 *@argv: arrays of pointers to the string that are supplied to the program
 *
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>
/**
 *main - prints all the arguments supplied to the program
 *@argc: counts the arguments supplied to the program
 *@argv: arrays of pointers to the string that are supplied to the program
 *
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 *main - miltiplies two numbers
 *@argc: counts the arguments supplied to the program
 *@argv: arrays of pointers to the string that are supplied to the program
 *
 *Return: 0 success
 *       -1 less or more than 2 numbers were supplied
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		goto exit;
	}

exit: return (argc == 3 ? 0 : -1);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - adds positive numbers
 *@argc: number of arguments supplied to the program
 *@argv: array of pointers to the arguments supplied to the program
 *
 *Return: 0 success
 *        1 error, there are arguments withs symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char _case = 0;

	if (argc > 1)
	{
		while (--argc)
			if (check(argv[argc]))
				sum += atoi(argv[argc]);
			else
			{
				printf("Error\n");
				_case = 1;
				goto exit;
			}
		printf("%i\n", sum);
	}
	else
		printf("0\n");
exit: return (_case == 0 ? 0 : 1);
}
/**
 *check - checks if there are character that are not digits
 *@s: pointer to a string
 *Return: 1 if there are only digits
 *        0 if there is character that is not digit
 */
int check(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			goto exit;
exit: return (s[i] == '\0' ? 1 : 0);
}

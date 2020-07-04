#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to make change for an amount of
 *money
 *@argc: number of arguments supplied to the program
 *@argv: array of pointers to the arguments supplied to the program
 *
 *Return: 0 success
 *        1 error, the number of arguments passed to the program is not exactly
 *                 1
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i, temp, sum;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		goto exit;
	}
	else if (atoi(argv[1]) <= 0)
		printf("0\n");
	else
	{
		sum = 0;
		temp = atoi(argv[1]);
		i = 0;
		while (i < 5 && temp != 0)
		{
			sum = sum + temp / coins[i];
			temp = temp % coins[i];
			i++;
		}
		printf("%i\n", sum);
	}
exit: return (argc < 2 ? 1 : 0);
}

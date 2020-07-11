#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *check_digit - checks if a string contains only digit
 *@s: pointer to string to check
 *
 *Return: 0 if there is at least a digit
 *        1 if the strins only contains digits
 */
int check_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}

	return (1);
}
/**
 *_strlen - returns the length of a string
 *@s: pointer to the string
 *
 *Return: length of the string
 */
int _strlen(char *s)
{
	int c = 0;
	char ch;

	while ((ch = *(s + c)) != '\0')
		c++;

	return (c);
}
/**
 *_mul - multiplies two positive numbers
 *@s1: pointer to the first number stored as string of chars
 *@len1: length of the first number
 *@s2: length of the second number stored as string of chars
 *@len2: length of the second number
 *@len_mul: possible length of the multiplication
 *
 *Return: _mul pointer to the array where is stored the result of
 *        multiplication
 *	  Error 98 if something fails
 */
int *_mul(char *s1, int len1, char *s2, int len2, int len_mul)
{
	int i = 0, j = 0, k = 0, residue = 0;
	int *res = NULL;
	int *_mul = NULL;

	_mul = malloc((unsigned int)len_mul * sizeof(int));
	if (_mul == NULL)
		exit(98);
	_initialize(_mul, len_mul);
	j = len2 - 1;
	while (j >= 0)
	{
		i = len1 - 1;
		k = len1;
		residue = 0;
		res = malloc(((unsigned int)len1 + 1) * sizeof(int));
		if (res == NULL)
			exit(98);
		while (i >= 0)
		{
			res[k] = (residue + (s1[i] - '0') * (s2[j] - '0')) % 10;
			residue = (residue + (s1[i] - '0') * (s2[j] - '0')) / 10;
			k--;
			i--;
		}
		res[k] = residue;
		len_mul--;
		array_sum(res, len1, _mul, len_mul);
		j--;
		free(res);
	}
	return (_mul);
}
/**
 *array_sum - adds the diferent results obtained in each multiplication step
 *@res: pointer to the result of the multiplication step
 *@len1: length of where @res is poiting
 *@_mul: pointer that points to the allocated space where the global result
 *	 will be stored
 *@len_mul: possible length of multiplication
 *
 *Return: void
 */
void array_sum(int *res, int len1, int *_mul, int len_mul)
{
	int i = 0, j = len_mul, residue = 0, sum = 0;

	i = len1;
	while (i >= 0)
	{
		sum = residue + _mul[j] + res[i];
		_mul[j] = sum % 10;
		residue = sum / 10;
		i--;
		j--;
	}
}
/**
*_initialize - initializes an allocated memory of int with 0
*@s: pointer to the allocated memory
*@len: length of the allocated memory
*
*Return: void
*/
void _initialize(int *s, int len)
{
	int i = 0;

	while (i < len)
	{
		s[i] = 0;
		i++;
	}
}
/**
*print_mul - prints the result of the multiplication
*@s: pointer to the result
*@len: length of array where @s is pointing
*
*Return: void
*/
void print_mul(int *s, int len)
{
	int i = 0;

	if (s[i] == 0)
	{
		while (s[i] == 0 && i < len)
			i++;
	}
	if (i == len)
		_putchar('0');
	while (i < len)
	{
		_putchar(s[i] + '0');
		i++;
	}
	_putchar('\n');
}
/**
 *main - entry point
 *@argc: numbers of arguments supplied to the program
 *@argv: array of pointers to the arguments supplied to the program
 *
 *Return: 0 sucess
 *	  Error 98 if something fails
 */
int main(int argc, char *argv[])
{
	int len1 = 0, len2 = 0, len_mul = 0;
	int *mul = NULL;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(check_digit(argv[1])) || !(check_digit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len_mul = len1 + len2;
	mul = _mul(argv[1], len1, argv[2], len2, len_mul);
	print_mul(mul, len_mul);
	free(mul);

	return (0);
}

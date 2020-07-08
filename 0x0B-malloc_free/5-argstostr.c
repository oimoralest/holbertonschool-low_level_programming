#include <stdlib.h>
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: array of pointers that point to the arguments
 *
 *Return: NULL if @ac is equal to zero, @av is equal to NULL or malloc fails
 *        ptr pointer to the concatenated new string
 */
char *argstostr(int ac, char **av)
{
	int sum = 0, i = 0, k = 0, j = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		if (av[i][j] != '\0')
			sum++, j++;
		else
		{
			sum++;
			i++;
			j = 0;
		}
	}
	sum++;
	i = 0;
	j = 0;
	ptr = malloc(sum * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		if ((ptr[k++] = av[i][j++]) != '\0')
			;
		else
		{
			ptr[--k] = '\n', k++, i++;
			j = 0;
		}
	}
	ptr[k] = '\0';

	return (ptr);
}

#include "holberton.h"
/**
 *leet - encodes a string into 1337
 *@s: string to encode
 *
 *Return: s (string encoded)
 */
char *leet(char *s)
{
	char LEET[] = "aAeEoOtTlL4433007711";
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == LEET[j])
			{
				s[i] = LEET[j + 10];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

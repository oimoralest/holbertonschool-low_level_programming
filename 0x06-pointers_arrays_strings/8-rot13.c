#include "holberton.h"
/**
 *rot13 - encodes a string using rot13
 *@s: string to encode
 *
 *Return: s (string encoded)
 */

char *rot13(char *s)
{
	char rot[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	int i, j, r;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (rot[j] != '\0')
		{
			if (s[i] == rot[j])
			{
				r = j + 26 - 52 * (j / 26);
				s[i] = rot[r];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}

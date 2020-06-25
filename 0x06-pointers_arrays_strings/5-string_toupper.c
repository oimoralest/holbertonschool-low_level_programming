#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@s: pointer to the string
 *
 *Return: s initial point of s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}

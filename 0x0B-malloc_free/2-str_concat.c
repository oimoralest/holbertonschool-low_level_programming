#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *
 *Return: ptr pointer to the newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _size(s1);
	len2 = _size(s2);
	ptr = malloc((len1 + len2 - 1) * sizeof(char));
	while (i < len1 && s1 != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}

	return (ptr);
}
/**
 *_size - returns the length of a string
 *@str: pointer to the string to get its length
 *
 *Return: s size of the string
 */
unsigned int _size(char *str)
{
	unsigned int s = 0;

	while (str[s++] != '\0')
		;
	return (str == NULL ? 0 : s);
}

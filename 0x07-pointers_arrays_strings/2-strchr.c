#include "holberton.h"

/**
 *_strchr - locates a character in a string
 *@c: character to locate
 *@s: string to look for in
 *
 *Return: s (pointer to te first occurrence of the character)
 *        NULL (if the character is not found)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ("NULL");
}

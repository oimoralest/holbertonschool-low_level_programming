#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@accept: bytes to match
 *@s: string to look for into
 *
 *Return: c number of bytes in the initial segment of @s which consist only
 *of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, i;

	c = i = 0;
	while (*s != '\0')
	{
		if (*s == accept[i])
		{
			c++;
			s++;
			i = 0;
		}
		else if (accept[i] != '\0')
			i++;
		else
			break;
	}

	return (c);
}

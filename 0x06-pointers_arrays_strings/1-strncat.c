#include "holberton.h"

/**
 *_strncat - concatenates two string using n bytes from src
 *@src: pointer to the first string
 *@dest: pointer to the second string
 *@n: bytes to use from src
 *
 *Return: ip_dest (initial position of dest pointer)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ip_dest;

	ip_dest = dest;
	while (*dest != '\0')
		dest++;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (ip_dest);
}

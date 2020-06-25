#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *@src: pointer to the first string
 *@dest: pointer to the second string
 *
 *Return: ip_dest (initial position of dest)
 */

char *_strcat(char *dest, char *src)
{
	char *ip_dest; /*initial positition of dest*/

	ip_dest = dest;
	while (*dest != '\0')
		dest++;
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';

	return (ip_dest);
}

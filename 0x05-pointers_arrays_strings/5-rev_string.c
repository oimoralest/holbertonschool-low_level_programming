#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: pointer to the string
 *
 *Return: void
 */
void rev_string(char *s)
{
	char temp;
	int len, c, c1;

	len = c = 0;
	while ((temp = *(s + len)) != '\0')
		len++;
	c1 = len - 1;
	while (c <= len / 2)
	{
		temp = *(s + c);
		*(s + c) = *(s + c1);
		*(s + c1) = temp;
		c1--;
		c++;
	}
}

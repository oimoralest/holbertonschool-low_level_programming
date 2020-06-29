#include "holberton.h"

/**
 *_strstr - locates a substring
 *@haystack: string to search within it
 *@needle: substring to search in @haystack
 *
 *Return: ip (initial position where the substring is founded)
 *        NULL if the substring is not founded
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *ip;

	ip = haystack;
	while (*haystack != '\0')
	{
		if (*haystack == needle[i])
		{
			ip = haystack;
			while (*haystack == needle[i] && needle[i] != '\0')
			{
				haystack++;
				i++;
			}
			if (needle[i] == '\0')
				goto exit;
			else
			{
				haystack++;
				i = 0;
				continue;
			}
		}
		else
		{
			haystack++;
			i = 0;
		}
	}

exit: return (needle[i] == '\0' ? ip : '\0');
}

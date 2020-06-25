#include "holberton.h"
/**
 * cap_string - capitalizes all words
 *@s: pointer to string to capitalize
 *
 *Return: s (string capitalized)
 */
char *cap_string(char *s)
{
	char separators[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			       '(', ')', '{', '}', '\0'};
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (separators[j] != '\0')
		{
			if (i == 0 && s[i] >= 92 && s[i] <= 122)
			{
				s[i] -= 32;
				i++;
			}
			else if (s[i] == separators[j])
			{
				i++;
				if (s[i] >= 92 && s[i] <= 122)
				{
					s[i] -= 32;
					break;
				}
				j = 0;
				continue;
			}
			j++;
		}
		i++;
	}

	return (s);
}

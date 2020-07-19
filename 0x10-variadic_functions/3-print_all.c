#include "variadic_functions.h"
/**
 *_strlen - finds the length of a string
 *@str: string
 *
 *Return: i length of the string
 */
int _strlen(const char * const str)
{
	int i = 0;

	while (str[i++])
		;
	return (--i);
}
/**
 *print_all - prints anything
 *@format: formant to print
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list _print;
	int i = 0, separator = 0, len = 0;
	char *ptr = NULL;

	len = _strlen(format);
	if (len != 0)
	{
		va_start(_print, format);
		while (format[i])
		{
			separator = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(_print, int));
				break;
			case 'f':
				printf("%f", va_arg(_print, double));
				break;
			case 'i':
				printf("%i", va_arg(_print, int));
				break;
			case 's':
				ptr = va_arg(_print, char *);
				if (ptr == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
			default:
				separator = 0;
				break;
			}
			if (i < len - 1 && separator)
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(_print);
	}
}

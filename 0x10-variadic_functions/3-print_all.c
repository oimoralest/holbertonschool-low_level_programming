#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: formant to print
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list _print;
	int i = 0, separator = 0;
	char *ptr = NULL;

	va_start(_print, format);
	while (format && format[i])
	{
		while (format[i])
		{
			separator = 1;
			switch (format[i++])
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
				if (!*ptr)
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
			if (format[i] && separator)
				printf(", ");
		}
		printf("\n");
	}
	va_end(_print);
}

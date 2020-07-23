#include "lists.h"
/**
 *before_main - prints a message before main is executed
 *
 *Return: void
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

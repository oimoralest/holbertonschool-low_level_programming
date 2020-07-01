#include "holberton.h"

/**
 *is_palindrome - return if a string is palindrome
 *@s: pointer to the string
 *
 *Return: 1 if is palindrome
 *        0 if is not
 */

int is_palindrome(char *s)
{
	char *fp;

	fp = final_position(s);

	return (palindrome(s, fp));
}

/**
 *final_position - returns a pointer to the final position of a string
 *@s: pointer to the string
 *
 *Return: fp final position of the string
 */

char *final_position(char *s)
{
	return (*s == '\0' ? (s - 1) : final_position(s + 1));
}

/**
 *palindrome - check if a string is palindrome or not
 *@s: pointer to the initial position of the string
 *@fp: pointer to the final position of the string
 *
 *Return: 1 if is palindrome
 *        0 if is not
 */

int palindrome(char *s, char *fp)
{
	return (*s != *fp ? 0 : s == fp || s > fp ? 1 :
		palindrome(s + 1, fp - 1));
}

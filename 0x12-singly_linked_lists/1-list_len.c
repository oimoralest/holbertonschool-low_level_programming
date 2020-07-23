#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: list
 *
 *Return: n number of elements in @h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
		ptr = ptr->next, n++;

	return (n);
}

#include "lists.h"
/**
 *free_list - Frees a list_t list
 *@head: list
 *
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;
	list_t *ptr2;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		ptr2 = ptr;
		ptr = ptr->next;
		free(ptr2);
	}
}

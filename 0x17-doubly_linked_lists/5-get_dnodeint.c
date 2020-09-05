#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 *linked list
 * @head: head of the list
 * @index: index
 * Return: the address of the nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index > 0)
		head = head->next, index--;
	return (head);
}

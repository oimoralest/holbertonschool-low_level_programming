#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * list
 * @head: head of the list
 * @n: data
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!*head) /* Empty list */
	{
		new_node->next = NULL, new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		while (new_node->next->next)
			new_node->next = new_node->next->next;
		new_node->next->next = new_node;
		new_node->prev = new_node->next;
		new_node->next = NULL;
	}

	return (new_node);
}

#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list
 * @head: head of the list
 * @n: data (integer)
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!*head)
	{
		new_node->prev = *head, new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head, new_node->prev = NULL;
		new_node->next->prev = new_node, *head = new_node;
	}

	return (new_node);
}

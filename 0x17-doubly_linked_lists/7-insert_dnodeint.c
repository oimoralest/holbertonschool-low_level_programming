#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: head of the list
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = NULL, *new_node = NULL;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx)
	{
		aux = *h;
		while (aux && i < idx - 1)
			aux = aux->next, i++;
		if (!aux)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!idx)
	{
		new_node->prev = NULL, new_node->next = *h;
		*h = new_node;
	}
	else
	{
		new_node->prev = aux, new_node->next = aux->next;
		aux->next = new_node;
	}
	if (new_node->next)
		new_node->next->prev = new_node;

	return (new_node);
}

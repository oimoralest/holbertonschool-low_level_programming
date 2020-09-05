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
	dlistint_t *aux, *new_node = NULL;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!idx || !*h)
	{
		if (!*h)
			new_node->next = *h, new_node->prev = *h;
		else
		{
			new_node->prev = NULL, new_node->next = *h;
			new_node->next->prev = new_node;
		}
		*h = new_node;
	}
	else
	{
		aux = *h;
		while (aux->next && idx > 0)
			aux = aux->next, idx--;
		if (!aux->next && idx == 0)
		{
			aux->next = new_node, new_node->prev = aux;
			new_node->next = NULL;
		}
		else if (aux->next && idx == 0)
		{
			new_node->prev = aux->prev, aux->prev->next = new_node;
			new_node->next = aux, aux->prev = new_node;
		}
	}

	return (idx == 0 ? new_node : NULL);
}

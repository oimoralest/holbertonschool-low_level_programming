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

	if (!h || (!*h && idx > 0))
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!idx)
		new_node->next = NULL, new_node->prev = NULL, *h = new_node;
	else
	{
		aux = *h;
		while (aux && idx > 0)
			aux = aux->next, idx--;
		if (!aux)
			;
		else
		{
			new_node->next = aux, new_node->prev = aux->prev;
			aux->prev->next = new_node, aux->prev = new_node;
		}
	}

	return (!aux ? NULL : new_node);
}

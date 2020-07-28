#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: head of the list
 *@idx: Index
 *@n: data for new node
 *
 *Return: NULL if malloc fails or if node at index cannot be added or address
 *of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = NULL;
	listint_t *aux;

	aux = *head;
	while (aux && i < idx)
		aux = aux->next, i++;
	if (aux && i == idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n, i = 0, aux = *head;
		while (i < idx - 1)
			aux = aux->next, i++;
		new_node->next = aux->next, aux->next = new_node;
	}

	return (new_node);
}

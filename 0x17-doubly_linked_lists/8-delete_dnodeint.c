#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node at index index of a
 *dlistint_t linked list
 *@head: head of the list
 *@index: index
 *Return: 1 if it succeeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	aux = *head;
	if (!index)
	{
		*head = aux->next;
		if (aux->next)
			aux->next->prev = NULL;
		free(aux);
	}
	else
	{
		while (aux && i < index)
			aux = aux->next, i++;
		if (!aux)
			return (-1);
		if (aux->next)
			aux->next->prev = aux->prev;
		aux->prev->next = aux->next;
		free(aux);
	}

	return (1);
}

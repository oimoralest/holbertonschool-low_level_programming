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

	if (!head)
		return (-1);
	if (!*head)
		return (-1);
	aux = *head;
	if (index)
	{
		while (aux && i < index - 1)
			aux = aux->next, i++;
		if (!aux)
			return (-1);
	}
	if (!index)
	{
		if (aux->next)
			aux->next->prev = NULL, *head = aux->next;
		else
			*head = NULL;
		free(aux);
	}
	else
	{
		if (aux->next)
		{
			aux->prev->next = aux->next;
			aux->next->prev = aux->prev;
		}
		else
			aux->prev->next = NULL;
		free(aux);
	}

	return (1);
}

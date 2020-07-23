#include "lists.h"
/**
 *str_len - returns the length of a string
 *@str: string
 *
 *Return: i length of the @str
 */
int str_len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: list to refresh
 *@str: data
 *
 *Return: NULL if malloc fails
 *new_node address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (ptr != NULL)
			last = ptr, ptr = ptr->next;
		last->next = new_node;
	}

	return (new_node);
}

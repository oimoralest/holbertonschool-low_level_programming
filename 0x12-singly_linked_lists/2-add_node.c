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
 *add_node - adds a new node at the beginning of a list
 *@head: head of the list
 *@str: data for every node
 *
 *Return: NULL if malloc fails
 *new_node address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

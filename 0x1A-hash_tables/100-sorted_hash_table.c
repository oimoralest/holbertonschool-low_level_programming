#include "hash_tables.h"
/**
 * shash_table_create - Creates a new hash table
 * @size: size of the array
 * Return: A pointer to the new hash table
 * Otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *aux = NULL;

	if (size == 0)
		return (NULL);
	aux = malloc(sizeof(shash_table_t));
	if (!aux)
		return (NULL);
	aux->size = size;
	aux->array = calloc(size, sizeof(shash_node_t *));
	if (!(aux->array))
	{
		free(aux);
		return (NULL);
	}
	aux->shead = NULL, aux->stail = NULL;
	return (aux);
}
/**
 * sortedInsert - Sort a hash table
 * @head: Head of the hash
 * @tail: tail of the hash
 * @new: new node to sort
 * Return: void
 */
void sortedInsert(shash_node_t **head, shash_node_t **tail, shash_node_t *new)
{
	if (*head == NULL || strcmp(new->key, (*head)->key) < 0)
	{
		new->snext = *head;
		new->sprev = NULL;
		if (*head)
			(*head)->sprev = new;
		else
			*tail = new;
		*head = new;
	}
	else
	{
		new->snext = *head;
		while (new->snext && new->snext->snext
		&& strcmp(new->key, new->snext->snext->key) > 0)
			new->snext = new->snext->snext;
		new->sprev = new->snext;
		if (new->snext->snext)
			new->snext->snext->sprev = new;
		else
			*tail = new;
		new->snext = new->snext->snext;
		new->sprev->snext = new;
	}
}
/**
 * shash_table_set - adds an element to the hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new_node = NULL, *aux = NULL;

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	if (!ht || !(ht->array) || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux)
	{
		if (!strcmp(key, aux->key))
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index], ht->array[index] = new_node;
	sortedInsert(&(ht->shead), &(ht->stail), new_node);
	return (1);
}
/**
 * shash_table_get - value associated with a key
 * @ht: Hash table
 * @key: Key to search
 * Return: Value on success or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *aux = NULL;

	if (!key || strlen(key) == 0 || !ht || !ht->array || ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux)
	{
		if (!strcmp(key, aux->key))
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints a hash table
 * @ht: Hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux = NULL;
	int flag = 0;

	aux = ht->shead;
	putchar('{');
	while (aux)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", aux->key, aux->value);
		aux = aux->snext;
		flag = 1;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a hash table in reverse order
 * @ht: Hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux = NULL;
	int flag = 0;

	aux = ht->stail;
	putchar('{');
	while (aux)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", aux->key, aux->value);
		aux = aux->sprev;
		flag = 1;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table
 * @ht: Hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *next = NULL, *behind = NULL;

	if (!ht)
		return;
	if (ht->size == 0 || !(ht->array))
	{
		free(ht);
		return;
	}
	while (i < ht->size)
	{
		next = ht->array[i];
		while (next)
		{
			behind = next;
			next = next->next;
			free(behind->key);
			free(behind->value);
			free(behind);
		}
		i++;
	}
	free(ht->array), free(ht);
}

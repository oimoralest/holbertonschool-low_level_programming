#include "hash_tables.h"
/**
 * hash_table_create - Creates a new hash table
 * @size: size of the array
 * Return: A pointer to the new hash table
 * Otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *aux = NULL;

	if (size == 0)
		return (NULL);
	aux = calloc(1, sizeof(hash_table_t));
	if (!aux)
		return (NULL);
	aux->size = size;
	aux->array = calloc(size, sizeof(hash_node_t *));
	if (!(aux->array))
	{
		free(aux);
		return (NULL);
	}
	return (aux);
}

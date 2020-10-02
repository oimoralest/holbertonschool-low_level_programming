#include "hash_tables.h"
/**
 * hash_table_get - value associated with a key
 * @ht: Hash table
 * @key: Key to search
 * Return: Value on success or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *aux = NULL;

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

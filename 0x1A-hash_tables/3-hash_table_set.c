#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	if (!ht || !(ht->array) || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}

	return (1);
}

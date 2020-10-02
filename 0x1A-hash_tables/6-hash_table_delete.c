#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next = NULL, *behind = NULL;

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

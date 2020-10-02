#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;
	if (ht->size == 0 || !(ht->array))
	{
		free(ht);
		return;
	}
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				aux = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(aux->key), free(aux->value);
				free(aux);
			}
		}
		i++;
	}
	free(ht->array), free(ht);
}

#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	int flag = 0;

	if (!ht)
		return;
	putchar('{');
	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			flag = 1;
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}

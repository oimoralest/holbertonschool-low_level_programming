#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t **aux = NULL;
	int flag = 0;

	if (!ht)
		return;
	aux = ht->array;
	putchar('{');
	while (i < ht->size)
	{
		if (aux[i] == NULL)
		{
			i++;
		}
		else if (aux[i]->next != NULL)
		{
			while (aux[i])
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", aux[i]->key, aux[i]->value);
				flag = 1;
				aux[i] = aux[i]->next;
			}
			i++;
		}
		else
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", aux[i]->key, aux[i]->value);
			flag = 1;
			i++;
		}
	}
	printf("}\n");
}

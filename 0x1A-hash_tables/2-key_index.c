#include "hash_tables.h"
/**
 * key_index - return the indexat which the key/value pair should be stored in
 * the array of the hash table
 * @key: string used to generate hash value
 * @size: size of the array
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (-1);
	return (hash_djb2(key) % size);
}

#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: size of the hash table to create.
  * Return: a pointer to the hash table.
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(*ht));

	if (ht)
	{
		ht->array = calloc(sizeof(*ht->array));
		if (ht->array)
		{
			ht->size = size;
			return (ht);
		}
		free(ht);
	}
	return (NULL);
}

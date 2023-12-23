#include "hash_table.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to add or update the key to
 * @key: key to add
 * @value: value to store for key (must be duplicated)
 * Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp,*new;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = 
	temp = ht->array[index];

	while(temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] != NULL)
		new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}

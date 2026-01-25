#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon success - 1.
 *         Upon failure - 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;
	char *value_copy;

	/* Check for invalid inputs */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Get the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists in the chain */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			/* Key exists, update the value */
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	/* Key doesn't exist, create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Duplicate the key and value */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->value = value_copy;

	/* Add new node at the beginning of the chain (collision handling) */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

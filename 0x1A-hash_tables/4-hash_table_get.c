#include "hash_tables.h"
/**
 * hash_table_get - get value of key in ht
 * @ht: hash table
 * @key: the key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = NULL;
	unsigned long int index = 0;

	if (!(key && ht))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (!strcmp(key, head->key))
			return (head->value);
		head = head->next;
	}
	return (0);
}

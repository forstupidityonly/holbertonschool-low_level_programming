#include "hash_tables.h"
/**
 * hash_table_set - add a node
 * @ht: the table
 * @key: the key
 * @value: the value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *head = NULL;
	unsigned long int index_value = 0;
	char *new_value = strdup(value);

	if (!new_value)
		return (0);

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);

	index_value = key_index((unsigned char *)key, ht->size);
	head = ht->array[index_value];

	while (head)
	{
		if (!strcmp(key, head->key))
		{
			free(head->value);
			head->value = new_value;
			return (1);
		}
		head = head->next;
	}
	new = helper(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index_value];
	ht->array[index_value] = new;
	return (1);
}
/**
 * helper - actually makes the node
 * @key: the key
 * @value: the value
 * Return: new node
 */
hash_node_t *helper(const char *key, const char *value)
{
	hash_node_t *el_node;

	el_node = malloc(sizeof(hash_node_t));
	if (!el_node)
		return (0);
	el_node->value = strdup(value);
	if (!el_node->value)
	{
		free(el_node);
		return (0);
	}
	el_node->key = strdup(key);
	if (!el_node->key)
	{
		free(el_node->value);
		free(el_node);
		return (0);
	}
	el_node->next = NULL;
	return (el_node);
}

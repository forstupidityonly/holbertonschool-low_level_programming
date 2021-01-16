#include "hash_tables.h"
/**
 * hash_table_delete - deletes the table
 * @ht: the table
 * Return: no
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i;

	if (!ht)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			ht->array[i] = ht->array[i]->next;
			free(head->key);
			free(head->value);
			free(head);
			head = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}

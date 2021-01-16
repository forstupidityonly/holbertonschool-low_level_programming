#include "hash_tables.h"
/**
 * hash_table_print - print the table
 * @ht: the table
 * Return: no
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i;
	int fake_bool = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			if (fake_bool)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			fake_bool = 1;
			head = head->next;
		}
	}
	printf("}\n");
}

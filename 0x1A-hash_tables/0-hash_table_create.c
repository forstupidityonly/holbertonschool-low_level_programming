#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of table
 * Return: the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*decelation of table*/
	hash_table_t *table = NULL;

	/*bogus size*/
	if (!size)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	/*malloc fail*/
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	/*calloc fail*/
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	/*sucess*/
	return (table);
}

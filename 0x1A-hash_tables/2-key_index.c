#include "hash_tables.h"
/**
 * key_index - returns the index in size that key would be in
 * @key: searching for
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if(!size)
        return(0);
    return (hash_djb2(key) % size);
}
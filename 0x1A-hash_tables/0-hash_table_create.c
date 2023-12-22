#include "hash_tables.h"
/*
 * hash_table_create - function
 *Description: create hash table
 *@size: int
 *Return: pointer
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *node;

	node = malloc(size * sizeof(hash_table_t));
	if (node == NULL)
		return (NULL);
	return (node);

}

#include "hash_tables.h"
/*
 * hash_table_create - function
 *Description: create hash table
 *@size: int
 *Return: pointer
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;

	tab = malloc(sizeof(hash_table_t *));
	if (tab == NULL)
		return (NULL);
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t **));
	if (tab->array == NULL)
		return (NULL);
	return (tab);

}

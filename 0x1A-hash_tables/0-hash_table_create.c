#include "hash_tables.h"
/**
 *hash_table_create - function
 *Description: create hash table
 *@size: int
 *Return: pointer
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;

	if (size <= 0)
		return (NULL);
	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);
	tab->array = malloc(size * sizeof(hash_node_t *));
	if (tab->array == NULL)
	{
		free(tab);
		return (NULL);
	}
	tab->size = size;
	return (tab);

}

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
	unsigned long int i = 0;

	tab = malloc(sizeof(hash_table_t ));
	if (tab == NULL)
		return (NULL);
	tab->size = size;
	tab->array = malloc(size * sizeof(hash_node_t *));
	if (tab->array == NULL)
		return (NULL);
	for (i = 0; i < tab->size; i++)
		tab->array[i] = NULL;
	return (tab);

}

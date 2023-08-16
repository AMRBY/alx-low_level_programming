#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - function
* Description: its name
* @array: argv
* @size: argc
* @action: argc
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (arrar && action && size != 0)
		for (i = 0; i < size; i++) 
			action(array[i]);
}

#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
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

	for (i = 0; i < size; i++) 
		action(array[i]);
}

#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - function
* Description: its name
* @array: argv
* @size: argc
* @cmp: argc
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
		return (-1);

	}
}

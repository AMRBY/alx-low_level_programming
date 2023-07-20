#include "main.h"

/**
 * print_square - find digit
 * Description: find digit
 * @size: int
 * Return: 0/1
 **/
void print_square(int size)
{
	int i;
	int j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			j = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	return;
}

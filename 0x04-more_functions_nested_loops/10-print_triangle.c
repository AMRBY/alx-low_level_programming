#include "main.h"

/**
 * print_diagonal - find digit
 * Description: find digit
 * Return: 0/1
 * */
void print_triangle(int size)
{
	int i, z, k;
	int j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = size - i - 1;
			while (j != 0)
			{
				_putchar(' ');
				j--;
			}
			z = i + 1;
			for (k = 0; k < z ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

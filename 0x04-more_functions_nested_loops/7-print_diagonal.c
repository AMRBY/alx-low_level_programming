#include "main.h"

/**
 * print_diagonal - find digit
 * Description: find digit
 * Return: 0/1
 * */
void print_diagonal(int n)
{
	int i;
	int j =0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (j != i)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	return;
}

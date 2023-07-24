#include "main.h"
#include <stdio.h>

/**
 * print_array - length of strings
 * Description: find digit
 * @a: int pointer
 * @n: int variable
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[n - 1]);
	}
}


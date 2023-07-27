#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - length of strings
 * Description: find digit
 * @a: int pointer
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	if (n % 2)
	{
		i = (n / 2) - 1;
		j = i + 2;
	}
	else
	{
		j = n / 2;
		i = j - 1;
	}
	while (i >= 0)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i--;
		j++;
	}
}

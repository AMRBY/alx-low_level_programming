#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - length of strings
 * Description: find digit
 * @a: char pointer
 * @size: char pointer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int s1 = 0;
	int s2 = 0;

		for (j = 0; j < size; j++)
		{
			sum += a[(size * i) + i];
			sum1 += a[(size * (i + 1)) - (i + 1)];
		}
	printf("%d, %d\n", s1, s2);
}

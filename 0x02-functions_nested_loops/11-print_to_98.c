#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the last digit of a number
 * @n: variable
 * Description: prints the last digit of a number
 * Return: integer
 */

void print_to_98(int n)
{
	int i, j;
	
	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (j = n; j > 97; j--)
		{
			printf("%i", j);
			if (j != 98)
				printf(", ");
		}
	}
	printf("\n");
return;
}

#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the last digit of a number
 * Description: prints the last digit of a number
 * Return: integer
 */

void times_table(void)
{
	int i, j, z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			z = j * i;
			printf("%4d", z);
			if (j != 9)
				printf(",");
		}
	printf("\n");
	}
return;
}

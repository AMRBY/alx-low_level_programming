#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints the last digit of a number
 * Description: prints the last digit of a number
 * Return: integer
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
return;
}

#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * factorial - length of strings
 * Description: find digit
 * @n: char pointer
 * Return: void
 */
int factorial(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		x = n * factorial(n - 1);
		return (x);
	}
	else
		return (1);
}

#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _pow_recursion - length of strings
 * Description: find digit
 * @x: char pointer
 * @y: char pointer
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	int z = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		z = x * _pow_recursion(x, y - 1);
		return (z);
	}
	else
		return (1);
}

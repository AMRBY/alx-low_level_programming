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
int _sqrt(int i, int n)
{
	i = 1;
	int x = 2;
	if (x > i)
	{
		x = n / i;
		return(_sqrt (i+1, n));
	}
	else if (x == i)
		return (x);
	else 
		return (-1);
}
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (_sqrt(1, n));
	else if (n == 0)
		return (0);
	else
		return (-1);
}

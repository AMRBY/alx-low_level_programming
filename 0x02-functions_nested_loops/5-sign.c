#include <ctype.h>
#include "main.h"
/**
 * print_sign - putchar
 * Description: display _putchar string
 * @c: the character to check
 * Return: 0
*/
int print_sign(int x)
{

	if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

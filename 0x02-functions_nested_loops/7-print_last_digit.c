#include "main.h"
/**
 * print_last_digit - putchar
 * Description: display _putchar string
 * @c: the character to check
 * Return: 0
*/
int print_last_digit(int x)
{
	int y = x % 10;
	y = y + 48;
	_putchar(y);
	return (0);
}

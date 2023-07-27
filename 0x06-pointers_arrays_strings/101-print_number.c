#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int pc, i, z, nmodul, na;

	if (n == 0)
		_putchar('0');
	/* if n is negative we make it positive*/
	if (n < 0)
	{
		na = -n;
		_putchar('-');
	}
	else
		na = n;
	if (na < 10 && na > 0)
		_putchar(na + '0');
	while (na >= 10)
	{
		pc = na;
		z = 0;
		nmodul = 0;
		for (i = 0; pc >= 10; i++)
		{
			if (pc / 10 > 0 && pc % 10 == 0)
				z++;
			else
				z = 0;
			pc /= 10;
			nmodul =  (nmodul) ? nmodul * 10 : 10;
		}
		_putchar(pc + '0');
		while (z-- > 0)
			_putchar('0');
		na %= nmodul;
		if (na > 0 && na < 10)
			_putchar(na + '0');
	}
}

#include "main.h"

/**
 * more_numbers - find digit
 * Description: find digit
 * Return: 0/1
 * */
void more_numbers(void)
{
	int i;
	int j = 58;

	for (i = 48; i < j; i++)
	{
		_putchar(i);
		if (i == 57)
		{
			j = 53;
			i = 47;
		}
		if (j == 53 && i < 52)
		{
			_putchar('1');
		}
	}
	_putchar('\n');
	return;
}

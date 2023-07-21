#include "main.h"

/**
 * print_number - find digit
 * Description: find digit
 * @n: int
 * Return: 0/1
 **/
void print_number(int n)
{
	int m, d, mp;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n >= 10)
	{
		d = n;	
		while (d > 0)
		{
			m = d % 10;
			mp = m + 48;
			_putchar(mp);
			d = d / 10;
		}
		/**d = mp;	
		while (d > 0)
		{
			m = d % 10;
			mp = m + 48;
			_putchar(mp);
			d = d / 10;
		}
		*/
	}
	else
	{	
		mp = n + 48;
		_putchar(mp);
	}
}

int main(void)
{
	print_number(1234);
	_putchar('\n');
	print_number(3);
	_putchar('\n');
	print_number(0);
	    _putchar('\n');
	    print_number(-20);
	        _putchar('\n');
	return (0);
}

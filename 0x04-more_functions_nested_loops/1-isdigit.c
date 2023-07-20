#include <ctype.h>

/**
 * _isdigit - find digit
 * Description: find digit
 * Return: 0/1
 * */
int _isdigit(int c)
{
	
	c = isdigit(c);

	if (c != 0)
		return (1);
	else
		return (0);
}

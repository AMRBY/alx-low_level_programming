#include <ctype.h>
#include "main.h"
/**
 * _abs - putchar
 * Description: display _putchar string
 * @x: the character to check
 * Return: 0
*/
int _abs(int x)
{

	if (x >= 0)
		x = x;
	else
		x = -x;
	return (x);
}

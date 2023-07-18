#include <ctype.h>
#include "main.h"
/**
 * _isalpha - putchar
 * Description: display _putchar string
 * @c: the character to check
 * Return: 0
*/
int _isalpha(int c)
{
	int x = isalpha(c);

	if (x == 0)
		return (0);
	else
		return (1);
}

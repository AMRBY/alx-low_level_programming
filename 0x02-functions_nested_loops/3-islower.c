#include <ctype.h>
#include "main.h"
/**
 * _islower - putchar
 * Description: display _putchar string
 * Description: c is a variable
 * Return: 0
*/
int _islower(int c)
{
	int x = islower(c);

	if (x == 0)
		return (0);
	else
		return (1);
}

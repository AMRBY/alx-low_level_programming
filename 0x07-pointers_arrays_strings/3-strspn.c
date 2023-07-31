#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - length of strings
 * Description: find digit
 * @s: char pointer
 * @accept: char pointer
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	int p;

	p = strspn(s, accept);
	return (p);
}

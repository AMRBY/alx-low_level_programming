#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - length of strings
 * Description: find digit
 * @s: char pointer
 * @accept: char pointer
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = strpbrk(s, accept);
	return (p);
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - length of strings
 * Description: find digit
 * @s: char pointer
 * @c: char pointer
 * Return: void
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
}

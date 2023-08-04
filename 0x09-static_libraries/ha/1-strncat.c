#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - length of strings
 * Description: find digit
 * @src: char pointer
 * @dest: char pointer
 * @n: int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}



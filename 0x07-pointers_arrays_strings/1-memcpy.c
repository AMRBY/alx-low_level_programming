#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - length of strings
 * Description: find digit
 * @dest: char pointer
 * @src: char pointer
 * @n: char pointer
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}



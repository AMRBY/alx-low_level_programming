#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - length of strings
 * Description: find digit
 * @src: char pointer
 * @dest: char pointer
 * @n: int
 * Return:char 
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);	
	return (dest);
}



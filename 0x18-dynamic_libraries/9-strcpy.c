#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - length of strings
 * Description: find digit
 * @src: int pointer
 * @dest: int variable
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

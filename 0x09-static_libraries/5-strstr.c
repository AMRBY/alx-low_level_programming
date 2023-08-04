#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - length of strings
 * Description: find digit
 * @haystack: char pointer
 * @needle: char pointer
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}

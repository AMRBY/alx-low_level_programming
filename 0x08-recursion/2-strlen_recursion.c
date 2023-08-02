#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - length of strings
 * Description: find digit
 * @s: char pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int j = 0;

	if (s[i] != '\0')
	{
		j = 1 + _strlen_recursion(&s[i + 1]);
		return (j);
	}
}

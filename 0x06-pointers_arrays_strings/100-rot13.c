#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - length of strings
 * Description: find digit
 * @p: pointer
 * Return: char
 */
char *rot13(char *p)
{
	int i = 0;
	int j = 0;
	char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char z[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	for (i = 0; p[i] != '\0'; i++)
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (p[i] == a[j])
			{
				p[i] = z[j];
				break;
			}
		j++;
		}
	}
	return (p);
}

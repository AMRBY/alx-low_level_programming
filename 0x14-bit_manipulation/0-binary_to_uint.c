#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - length of strings
 * Description: find digit
 * @b: int pointer
 * Return: size_t
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 1, sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		i--;

		if (b[i] == '0')
		{
			base *= 2;
		}
		else if (b[i] == '1')
		{
			sum += base;
			base *= 2;
		}
		else
			return (0);
	}
	return (sum);
}

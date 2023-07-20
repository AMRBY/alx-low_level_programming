#include <stdio.h>

/**
 * main - find digit
 * Description: find digit
 * Return: 0/1
 **/
int main(void)
{
	int i = 2;
	long j = 612852475143;

	while (i < j)
	{
		while (j % i != 0)
		{
			i++;
		}
		j = j / i;
	}
	printf("%d\n", i);
	return (0);
}

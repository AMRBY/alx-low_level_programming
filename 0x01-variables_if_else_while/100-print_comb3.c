#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int c = 48;
int v = 48;

	for (c = 48; c <= 57; c++)
	{
		v = c + 1;
		for (; v <= 57; v++)
		{
			putchar(c);
			putchar(v);
			if (c != 56 || v != 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}

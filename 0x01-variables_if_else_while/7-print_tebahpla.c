#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
int b;
int x;
int y;

	for (a = 48; a <= 57; a++)
	{
		x = a;
		for (b = 48; b <= 57; b++)
		{
			y = b + 1;
			for (; x <= 57; x++)
			{
				for (; y <= 57; y++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (a != 57 || b != 56 || x !=57 || y !=57 )
					{
						putchar(',');
						putchar(' ');
					}
				}
				y = 48;
			}
			x = a;
		}
	}
putchar('\n');
return (0);
}

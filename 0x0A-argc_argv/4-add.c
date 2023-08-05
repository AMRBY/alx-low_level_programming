#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - function
* Description: its name
* @argv: argv
* @argc: argc
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j;
	int x = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			x += atoi(argv[i]);
		}
		printf("%i\n", x);
	}
	else
		printf("0\n");
return (0);
}

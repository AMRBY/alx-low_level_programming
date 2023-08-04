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
	int i;
	int x = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] < '0' || argv[i][0] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				x += atoi(argv[i]);
			}
		}
		printf("%i\n", x);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

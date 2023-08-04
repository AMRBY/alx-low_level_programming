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
	int x;

	if (argc > 2)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", x);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

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
	int i = 0;
	int x = 0;
	int y;	
	int a[]={25, 10, 5, 2, 1};

	if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
			printf("0\n");
		else
		{ 
			y = atoi(argv[1]);
			while (i < 5)
			{
				x += y / a[i];
				y = y % a[i];  
				i++;
			}
			printf("%i\n", x);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}

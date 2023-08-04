#include "main.h"
#include <stdio.h>
/**
* main - function
* Description: its name
* @argv: argv
* @argc: argc
* Return: 0
*/
int main(__attribute__((unused))int argc,char *argv[])
{
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

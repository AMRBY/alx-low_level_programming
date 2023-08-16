#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function
* Description: its name
* @name: argv
* @f: argc
* Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

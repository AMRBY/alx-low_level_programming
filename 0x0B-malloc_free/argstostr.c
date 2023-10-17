#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *argstostr(int ac, char **av)
{
	char **s;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	s = malloc(sizeof(char *) * (ac-1));
	s = av;
	for (i = 1; av[i] != ""; i++)
	{
		s[i-1] = av[i];
	}
	return (*s);
}


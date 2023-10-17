#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, size = 0, f = 0;
	char **tab;

	if (str == "" || str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
			size++;
		else
			k++;

	tab = malloc(sizeof(char) * (size + k + 1));
	if (tab == NULL)
		return (NULL);

	for (i = 0; str[f]; i++)
	{
		for (j = 0; str[f] != ' '; j++)
			tab[i][j] = str[f++];

		tab[i][j+1] = '\0';
	}

	tab[i][j+1] = '\0';
	return (tab);
}

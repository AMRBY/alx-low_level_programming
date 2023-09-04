#include "main.h"

/**
 * read_textfile - length of strings
 * Description: find digit
 * @filename: int pointer
 * @letters int pointer
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	ssize_t r, w;
	char *p;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
	{
		close(o);
		return (0);
	}
	r = read(o, p, letters);
	close(o);
	if (r == -1)
	{
		free(p);
		return (0);
	}

	w = write(STDOUT_FILENO, p, r);
	free(p);
	if (w == -1)
		return (0);

	if (r != w)
		return (0);
	return (w);
}

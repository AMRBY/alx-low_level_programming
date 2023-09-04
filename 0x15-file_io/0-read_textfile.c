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
	int o, r, w;
	char *p = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, p, letters);
	if (o == -1 || r == -1)
		return (0);

	w = write(1, p, r);
	if (w == -1)
		return (0);

	close(o);
	return (letters);
}

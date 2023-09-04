#include "main.h"

/**
 * create_file - length of strings
 * Description: find digit
 * @filename: int pointer
 * @text_content: int pointer
 * Return: size_t
 */
int create_file(const char *filename, char *text_content)
{
	int o;
	size_t len;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (o == -1)
		return (-1);

	len = strlen(text_content);
	write(o, text_content, len);

	close(o);

	return (0);
}

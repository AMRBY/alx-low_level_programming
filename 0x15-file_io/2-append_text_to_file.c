#include "main.h"

/**
 * append_text_to_file - length of strings
 * Description: find digit
 * @filename: int pointer
 * @text_content: int pointer
 * Return: size_t
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content)
		len = strlen(text_content);

	w = write(o, text_content, len);
	if (w == -1)
		return (-1);

	close(o);

	return (1);
}

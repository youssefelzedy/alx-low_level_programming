#include "main.h"

/**
 *append_text_to_file - ...
 *@filename: ...
 *@text_content: ...
 *
 *Return: ..
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, strlen(text_content));
	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);
	return (1);
}

#include "main.h"

/**
 *create_file - ...
 *@filename: ...
 *@text_content: ...
 *
 *Return: ..
 */

int create_file(const char *filename, char *text_content)
{
	int fo, fw;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC  | 0600);
	fw = write(fo, text_content, strlen(text_content));
	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);
	return (1);
}

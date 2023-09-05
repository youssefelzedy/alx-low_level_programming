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
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC  | 0600);
	fw = write(fo, text_content, len);
	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);
	return (1);
}

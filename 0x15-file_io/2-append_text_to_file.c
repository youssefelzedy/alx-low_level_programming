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
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, len);
	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);
	return (1);
}

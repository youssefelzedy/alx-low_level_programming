#include "main.h"

/**
 *read_textfile - ...
 *@filename: ...
 *@letters: ...
 *
 *Return: ..
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *c;

	if (filename == NULL)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	fo = open("filename.txt", O_RDONLY);
	fr = read(fo, c, letters);
	fw = write(STDOUT_FILENO, c, fr);
	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(c);
		return (0);
	}

	free(c);
	close(fo);
	return (fw);
}

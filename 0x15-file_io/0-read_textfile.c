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

	fo = open("filename.txt", O_RDONLY);
	if (fo == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	fr = read(fo, c, letters);
	fw = write(STDOUT_FILENO, c, fr);


	free(c);
	close(fo);
	return (fw);
}

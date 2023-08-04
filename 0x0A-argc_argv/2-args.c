#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print the all string in argv
 *@argc: argument count
 *@argv: arguments
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

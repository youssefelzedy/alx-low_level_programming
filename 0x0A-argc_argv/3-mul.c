#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - multiplies two numbers.
 *@argc: argument count
 *@argv: arguments
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc != 3)
		printf("Error\n");
	else
	{
		ans = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ans);
	}

	return (0);
}

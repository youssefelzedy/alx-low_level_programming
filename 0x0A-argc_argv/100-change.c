#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *main - change the coins.
 *@argc: argument count
 *@argv: arguments
 *Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastCents = 0, money = atoi(argv[1]);
		int cents[] = { 25, 10, 5, 2, 1 };

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastCents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
					break;
			}
		}

		printf("%d\n", leastCents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

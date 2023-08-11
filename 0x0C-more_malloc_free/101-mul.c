#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * fill - fill ans.
 * @a: int 1
 * @b: int 2
 * @l1: len int 1
 * @l2: len int 2
 * Return: nothing
 */

int *fill(int *a, int *b, int l1, int l2)
{
	int tmp, i, j;
	int *ans = calloc(l1 + l2, sizeof(int));

	for (i = 0; i < l2; i++)
	{
		for (j = 0; j < l1; j++)
		{
			ans[i + j] += b[i] * a[j];
		}
	}
	for (i = 0; i < l1 + l2; i++)
	{
		tmp = ans[i] / 10;
		ans[i] = ans[i] % 10;
		ans[i + 1] = ans[i + 1] + tmp;
	}
	return (ans);
}

/**
 *main - adds mul.
 *@argc: argument count
 *@argv: arguments
 *Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, l1, l2;
	int *a, *b, *ans;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);
	a = malloc(sizeof(int) * l1);
	b = malloc(sizeof(int) * l2);
	ans = calloc(l1 + l2, sizeof(int));
	for (i = l1 - 1, j = 0; i >= 0; i--, j++)
		a[j] = argv[1][i] - '0';
	for (i = l2 - 1, j = 0; i >= 0; i--, j++)
		b[j] = argv[2][i] - '0';
	ans = fill(a, b, l1, l2);
	for (i = l1 + l2; i >= 0; i--)
	{
		if (ans[i] > 0)
			break;
	}
	for (; i >= 0; i--)
		printf("%d", ans[i]);
	printf("\n");

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

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

	if (!ans)
		printf("Error\n"), exit(98);
	for (i = 0; i < l2; i++)
	{
		for (j = 0; j < l1; j++)
			ans[i + j] += b[i] * a[j];
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
 * setdig - check if dig or not
 * @s: the first big number string
 * @l: number
 *
 * Return: array
 */

int *setdig(char *s, int l)
{
	int i, j, num = l;
	int *a = malloc(sizeof(int) * l);

	if (a == NULL)
		printf("Error\n"), exit(98);
	while (num--)
		a[num] = 0;
	for (i = l - 1, j = 0; i >= 0; i--, j++)
	{
		if (!_isdigit(s[i]))
		{
			free(a);
			printf("Error\n"), exit(98);
		}
		a[j] = s[i] - '0';
	}
	return (a);
}


/**
 *main - multiply two big number strings
 *@argc: argument count
 *@argv: arguments
 *Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, l1, l2;
	int *a, *b, *ans;

	if (argc != 3)
		printf("Error\n"), exit(98);
	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);
	a = malloc(sizeof(int) * l1);
	b = malloc(sizeof(int) * l2);
	ans = malloc(sizeof(int) * (l1 + l2));
	if (ans == NULL)
		printf("Error\n"), exit(98);
	a = setdig(argv[1], l1);
	b = setdig(argv[2], l2);
	ans = fill(a, b, l1, l2);
	for (i = l1 + l2; i >= 0; i--)
	{
		if (ans[i] > 0)
			break;
	}
	for (; i >= 0; i--)
		printf("%d", ans[i]);
	printf("\n");
	free(ans);
	free(a);
	free(b);

	return (0);
}

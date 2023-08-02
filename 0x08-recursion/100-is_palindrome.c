#include "main.h"

/**
 *palindrome_helper - returns check palindrome or not
 *@s: is string
 *@i: is integer
 *@j: is integer
 *Return: if palindrome Return 1 if not Return 0
 */

int palindrome_helper(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		else
			return (palindrome_helper(s, ++i, --j));
	}
	else
		return (0);
}

/**
 *is_palindrome - returns if palindrome or not
 *@s: is a string
 *Return: if palindrome or not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palindrome_helper(s, 0, length - 1));
}

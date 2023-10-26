#include "main.h"

int _strlen_rec(char *s);
int compare_string(char *s, int left, int right);
/**
 * _strlen_rec - to get the string lrngth
 * @s: string
 * Return: length of the string
 */

int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_rec(s + 1));
}
/**
 * compare_string - compare each character of the string
 * @s: string
 * @left: simple iterator
 * @right: largest iterator
 * Return: int
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if a string is a palandrome
 * @s: the string to test
 * Return: 1 if it is a palindrome, 0if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_rec(s - 1)));
}

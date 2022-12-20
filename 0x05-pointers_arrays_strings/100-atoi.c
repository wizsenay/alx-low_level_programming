#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: given value
 * Return: integer
 */
int _atoi(char *s)
{
	int a = 1;
	unsigned int b = 0;
	char n = 0;

	while (*s)
	{
		if (*s == '-')
			a *= -1;
		if (*s >= '0' && *s <= '9')
		{
			n = 1;
			b = b * 10 + *s - '0';
		}
		else if (n)
			break;
		s++
	}

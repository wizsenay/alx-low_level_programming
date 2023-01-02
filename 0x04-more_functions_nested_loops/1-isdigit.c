#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: input int
 * Return: 1 if the value is true
 */
int _isdigit(int c)
{
	char a;
	int e = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
		{
			e = 1;
			break;
		}
	}
	return (e);
}

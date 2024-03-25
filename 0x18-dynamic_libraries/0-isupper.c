#include "main.h"
#include <stdio.h>

/**
 * _isupper - chek capial letter
 * @c: input letter
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

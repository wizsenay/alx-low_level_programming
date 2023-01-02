#include "main.h"
/**
 * _isupper - chackes for upercase character
 * c: input int
 * Retern: 0 and 1
 */
int _isupper(int c)
{
	char d;
	int e = 0;
	d = 'A';

	for (; d <= 'Z'; d++)
	{
	if (c == d)
	{
		e = 1;
		break;
	}
	}
	return (e);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int e;
	int a = 0;

	while (a < 10)
	{
		e = 0;
		while (a < 10)
		{
			if (a != e && a < e)
			{
				putchar('0' + a);
				putchar('0' + e);

				if (e + a != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			e++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

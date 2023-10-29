#include "main.h"
#include <ctype.h>
/**
 * main -  a program that adds positive numbers.
 * @argc: count the strings.
 * @argv: input srting.
 * Return: (0) if seccess ful output, if not(1)
 */

int main(int argc, char *argv[])
{
	int i, s;
	int add;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		for (s = 0; argv[i][s] != '\0'; s++)
		{
			if (!isdigit(argv[i][s]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

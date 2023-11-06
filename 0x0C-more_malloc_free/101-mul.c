#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main -  multiplies two positive numbers.
 * @argc: counter
 * @argv: input string
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	char *ptr;
	int mul, i, s, coun;

	mul = 1;
	if (argc != 3)
	{
		printf("Errer\n");
		exit(98);
	}
	coun = strlen(argv[1]) + strlen(argv[2]);
	ptr = malloc(sizeof(char) * coun);
	if (ptr == NULL)
		exit(98);
	for (i = 1; i < argc; i++)
	{
		for (s = 0; argv[i][s] != '\0'; s++)
		{
			if (!isdigit(argv[i][s]))
			{
				printf("Error\n");
				exit(98);
			}
			ptr[i][s] = argv[i][s];
		}
		mul = mul * atoi(argv[i]);
	} 
	printf("%d\n", mul);
	return (0);
	free(ptr);
}

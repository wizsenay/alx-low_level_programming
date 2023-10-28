#include "main.h"
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: count the input strinhg
 * @argv: input string
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc < 0)
		printf("%s\n", argv[i]);
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: count the string
 * @argv: input strings form the comand line.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

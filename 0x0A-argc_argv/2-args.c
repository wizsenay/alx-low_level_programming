#include "main.h"
/**
 * main - prints all arguments it receives. one argument per line.
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

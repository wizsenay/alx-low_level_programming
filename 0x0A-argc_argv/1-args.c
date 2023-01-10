#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argv: input argument
 * @argc: counter to the argumment
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

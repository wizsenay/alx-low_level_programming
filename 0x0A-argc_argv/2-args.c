#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argv: input argument
 * @argc: count to the out put
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

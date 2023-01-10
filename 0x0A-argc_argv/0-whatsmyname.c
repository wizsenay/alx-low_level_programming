#include "main.h"
/**
 * main - a program that prints its name
 * @argc: count the input
 * @argv: the string input in comand line
 * return: 0
 */

int main(int argc, char* argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}

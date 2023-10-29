#include "main.h"
/**
 * main - a program that multiplies two numbers.
 * @argc: count the string
 * @argv: input numbers
 * Rrturn: (0) if it sucessfully if not (1)
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul = mul * atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}	

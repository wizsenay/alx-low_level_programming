#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - opreat some matimatical expresion
 * @argv: input numbers and sign
 * @argc: count the input strings
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *ch;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ch = argv[2];
	if (get_op_func(ch) == NULL || ch[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ch == '/' && num2 == 0) ||
		(*ch == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ch)(num1, num2));
	return (0);
}

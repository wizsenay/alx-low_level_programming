#include "main.h"
#include <ctype.h>
/**
 * main - adds positive numbersby using arguments
 * @argv: input arguments
 * @argc: count the input argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int add;
	int c;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		c = atoi(argv[argc]);
		add += c;
	}
	printf("%d\n", add);
	return (0);
}

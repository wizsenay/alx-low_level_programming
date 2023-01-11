#include "main.h"
/**
 * main -minimum number of coins to make change for an amount of money.
 * @argv: input argument
 * @argc: counter to argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int i;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (i % 25 >= 0)
		{
			cents += i / 25;
			i = i % 25;
		}
		if (i % 10 >= 0)
		{
			cents += i / 10;
			i = i % 10;
		}
		if (i % 5 >= 0)
		{
			cents += i / 5;
			i = i % 5;
		}
		if (i % 2 >= 0)
		{
			cents += i / 2;
			i = i % 2;
		}
		if (i % 1 >= 0)
		{
			cents += i / 1;
			i = i % 1;
		}
		printf("%d\n", cents);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

#include "main.h"
#include <ctype.h>
/**
 * main - prints the minimum nO of coins to make change for an amount of money.
 * @argc: count strings.
 * @argv: input string.
 * Return: (0)if it success, (1) if not
 */

int main(int argc, char *argv[])
{
	int i, num, result;
	int cen[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= cen[i])
		{
			result++;
			num -= cen[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

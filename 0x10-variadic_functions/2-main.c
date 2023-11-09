#include "variadic_functions.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(NULL, 2, "senay", "frehiwot");
    print_strings(",", 2, NULL, "frehiwot");
    print_strings(",", 2, "senay");
    return (0);
}

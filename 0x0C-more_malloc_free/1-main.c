#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat, *try, *tyr;

    concat = string_nconcat("Hello", NULL, 12);
    printf("%s\n", concat);
    try = string_nconcat(NULL, "Hello", 0);
    printf("%s\n", try);
    tyr = string_nconcat(NULL, NULL, 10);
    printf("%s\n", tyr);
    free(tyr);
    free(try);
    free(concat);
    return (0);
}

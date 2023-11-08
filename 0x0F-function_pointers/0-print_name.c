#include "function_pointers.h"
/**
 * print_name - prints an input name
 * @name: input name
 * @f: input function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

#include "function_pointers.h"

/**
 * print_name - function that prints name.
 * @name: the name to be printed
 * @f: function
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}

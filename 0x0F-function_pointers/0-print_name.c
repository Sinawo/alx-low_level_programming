#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to a function which takes string
 * Return: Nothing it just print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

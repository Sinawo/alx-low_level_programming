#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to a function which takes string
 * Return: Nothing it just print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

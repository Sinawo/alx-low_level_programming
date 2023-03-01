#include "main.h"
#include "_strlen.c"
/**
 * print_rev - print the string in reversr
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0;)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}

#include "_strlen.c"
#include "main.h"

/**
 * puts2 - prints every other character of string 2x
 *
 * @str: string to print 2 times
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

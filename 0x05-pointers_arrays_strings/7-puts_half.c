#include "_strlen.c"
#include "main.h"
/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 1)
	{
		for (i = (_strlen(str) - 1) / 2; i < _strlen(str); i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

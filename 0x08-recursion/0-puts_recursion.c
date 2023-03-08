#include "strlen.c"
#include "main.h"
#include<unistd.h>
/**
 * _puts_recursion - prints a sring followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}

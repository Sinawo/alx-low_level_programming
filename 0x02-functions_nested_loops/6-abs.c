#include <ctype.h>
#include "main.h"
/**
 * print_alphabet - function
 *
 * Description: This function prints alphabet in lowercase
 *
 * Return: aphabet std output
 */
int print_sign(int c)
{
	if ((c > 0))
	{
		_putchar('+');
		return 1;
	}
	else if (c == 0)
	{
		_putchar('0');
		return 0;
	}
	else
	{
		_putchar('-');
		return -1;
	}
}

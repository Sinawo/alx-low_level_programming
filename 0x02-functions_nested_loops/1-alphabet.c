#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function
 *
 * Description: This function prints alphabet in lowercase
 *
 * Return: aphabet std output
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

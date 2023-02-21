#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function
 *
 * print_alphabet_x10: function
 *
 * Description: This function prints alphabet 10x times in lowercase
 *
 * Return: aphabet std output
 */
void print_alphabet_x10(void)
{
	char ch;

	int count;

	for (count = 0, ch = 'a'; count < 10; count++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"
/**
 *
 *
 * Description: This function prints alphabet in lowercase
 *
 * Description: This function prints alphabet in lowercase
 *
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

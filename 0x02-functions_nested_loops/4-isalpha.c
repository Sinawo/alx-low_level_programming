#include <ctype.h>
#include "main.h"
/**
 * print_alphabet - function
 *
 * Description: This function prints alphabet in lowercase
 *
 * Return: aphabet std output
 */
int _isalpha(int c)
{
	if (isalpha(c)|| islower(c) || isupper(c) )
		return 1;
	else
		return 0;
}

#include <stdio.h>
#include "main.h"
/**
 * print_array - prints string woth commas
 * @a: array of integers
 * @n: numbers
 *
 */

void print_array(int *a, int n)
{
	int i; 

	for(i = 0; i < n; i++)
	{
		_putchar(a[i] + '0');	
		if (i != n-1)
		{
			_putchar(',');
			_putchar(' ');

		}

	}
	_putchar('\n');
	
}

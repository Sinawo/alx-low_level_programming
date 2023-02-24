#include "main.h"
/**
 * _isupper - checks if uppercase
 *
 * we use character c to compare 
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

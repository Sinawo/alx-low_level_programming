#include "stringlength.c"
/**
 * _strcmp - compares the strings
 *
 * @s1: First string
 * @s2: Second string.
 *
 * Return: This function returns -/+ number or 0 resulting from comarison.
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for(i = 0; i < n / 2; i++)
	{
        	tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

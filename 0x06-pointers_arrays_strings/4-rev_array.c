#include "stringlength.c"
/**
 * reverse_array - reverse array elements
 *
 * @a: array to change its elements
 * @n: number of elements.
 *
 * Return: This function returns reversed array elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for(i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tmp;
	}
}

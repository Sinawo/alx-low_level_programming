#include "4-pow_recursion.c"
/**
 * _sqrt_recursion - calculates the squre root of n
 * @n: integer to find it's root
 * Return: the srq(n)
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	
	if (n < 0 || i == n)
		return -1;
	

	for (; (i != n || n > 0); i++)
	{
		if (_pow_recursion(i, 2) == n)
			return (i);
	}
	return (i);
}

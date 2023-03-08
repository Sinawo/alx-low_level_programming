/**
 * factorial - counts the factorial of n
 * @n: integer to count its factorial value
 * Return: return !n or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

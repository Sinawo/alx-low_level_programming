/**
 * swap_int - swap integers
 * @a: 1st integer variable
 * @b: 2nd interger variable
 *
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}

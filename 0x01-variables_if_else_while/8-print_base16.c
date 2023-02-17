#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This main function print Hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	int last_digit = '9';

	while (ch <= last_digit)
	{
		if (ch == '9')
		{
			putchar(ch);
			ch = 'a';
			last_digit = 'f';
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

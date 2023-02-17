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
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This main function prints n and the last digit of n and states
 * if the last digit is > 5 or 6 or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch= 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

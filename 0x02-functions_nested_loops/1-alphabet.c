#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * This main function prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch = 'a';

        while (ch <= 'z')
        {
                _putchar(ch);
                ch++;
	}
}
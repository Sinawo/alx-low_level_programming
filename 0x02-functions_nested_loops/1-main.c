#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
int main(void)
{
    print_alphabet();
    return (0);
}

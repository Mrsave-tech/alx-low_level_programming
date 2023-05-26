#include "main.h"
/**
 * print_alphabet - starting point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0.
 * Author: Mr Save
 */
void print_alphabet(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++);
		_putchar(ch);
	_putchar('\n');
}

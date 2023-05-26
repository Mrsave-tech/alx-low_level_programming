#include "main.h"
/**
 * print_alphabet - Starting point
 *
 * Description: Print alphabet in lower case using _putchar
 * Return statement is void
 * Author: Mr save
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}

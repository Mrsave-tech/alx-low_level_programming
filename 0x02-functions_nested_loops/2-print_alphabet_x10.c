#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 * Author: Mr save
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

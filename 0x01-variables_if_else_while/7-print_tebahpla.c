#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero
 * Author: Mr Save
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

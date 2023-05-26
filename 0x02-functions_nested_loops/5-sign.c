#include "main.h"
/**
 * print_sign - prints the sign of a number
 * Description: prints a sign if a number is negative or positive
 * @n: returns a value of type int
 * Return: either bolean value otherwise -1
 * Author: Mr Save
 */
int print_sign(int n)
{
	int n = 0;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

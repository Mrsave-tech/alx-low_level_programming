#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number it self
 * Return: returns the last digit
 * Author: Mr save
 */
int print_last_digit(int n)
{
	int _last_digit;

	_last_digit = n % 10;
	if (_last_digit < 0)
		_last_digit *= -1;
	_putchar(_last_digit + '0');
	return (_last_digit);
}

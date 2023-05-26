#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 *
 * Description: checks if a character is lowercase
 * @c: return the integer value it recieves
 *
 * Return: 1 if true. 0 if false.
 * Author: Mr save
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

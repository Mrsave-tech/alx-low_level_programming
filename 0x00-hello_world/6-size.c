#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char ch;
	long long int d;
	float b;
	long int v;
	printf("size of an char: %lu Byte(s)\n", (unsigned int)sizeof(ch));
	printf("size of an int: %lu Byte(s)\n", (unsigned int)sizeof(i));
	printf("size of an long long int: %lu Byte(s)\n", (unsigned int)sizeof(d));
	printf("size of an float: %lu Byte(s)\n", (unsigned int)sizeof(b));
	printf("size of a long int: %lu Byte(s)\n", (unsigned int)sizeof(v));
	return (0);
}

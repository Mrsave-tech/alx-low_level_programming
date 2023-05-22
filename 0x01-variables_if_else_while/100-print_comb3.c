#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always zero
 * author: Mr Save
 */
int main(void)
{
	int num, num1;

	for (num = 0; num < 10; num++)
	{
		for (num = 0; num < 10; num++)
		{
			putchar((num % 10) + '0');
			putchar((num % 10) + '0');

			if (num == 9 && num == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}


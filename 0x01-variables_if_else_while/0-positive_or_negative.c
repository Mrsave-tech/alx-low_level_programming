#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 * Program Author: Mr Save
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("number is positive");
	else if (n < 0)
		printf("number is negative");
	else
		printf("the number is zero");
	return (0);
}

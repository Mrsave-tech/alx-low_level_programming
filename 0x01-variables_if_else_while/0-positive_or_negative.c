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
		printf("the number is greter than 0 thus, number is positive");
	else if (n < 0)
		printf("the number is less than 0 thus, number is negative");
	else
		printf("the number is 0");
	return (0);
}

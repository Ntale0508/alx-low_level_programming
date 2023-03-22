#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	int first = 1, second = 2, next, count = 0;

	printf("%d, %d, ", first, second);
	for (count = 2; count < 50 ; count++)
	{
		next = first + second;
		printf("%d", next);
		if (count != 49)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}

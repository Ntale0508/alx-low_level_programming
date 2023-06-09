#include "main.h"

/**
 * times_table - function that prints the 9 times table starting with 0
 */
int main(void)
{	
	time_table();

	int r, c, p;

	for (r = 0 ; r <= 9 ; r++)
	{
		for (c = 0 ; c <= 9 ; c++)
		{
			p = r * c;
			if (c == 0)
				_putchar('0');
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
		}

	}
	_putchar('\n');
	return (0);
}

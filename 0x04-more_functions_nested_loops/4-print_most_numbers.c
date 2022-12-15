#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9
 * except for 2 and 4.
 */

void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)

		if (!(c == '2' || c == '4'))
		{
			if (!(c == '2' || c == '4'))
				_putchar(c);
			c++;
		}
	_putchar('\n');
}

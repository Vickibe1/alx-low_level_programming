#include <stdio.h>

/**
 * main - find and prints sum of even fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int sum_of_events = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;

		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_events += sum;
	}

	printf("%d\n", sum_of_events);
	return (0);
}

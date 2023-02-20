#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 7; num++)
	{
		putchar((num % 10) + '0');
		if (num == 7)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

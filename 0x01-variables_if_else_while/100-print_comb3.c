#include <stdio.h>
/**
 * main - main block
 * Description: prints all possible different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int l, m, n;

	i = 0;
	while (i < 100)
	{
		m = l % 10; /* singlr digits */
		n = l / 10; /* double digits */

		if (n < m)
		{
			putchar(n + '0');
			putchar(m + '0');

			if (l < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		l++;
	}
	putchar('\n');
	return (0);
}

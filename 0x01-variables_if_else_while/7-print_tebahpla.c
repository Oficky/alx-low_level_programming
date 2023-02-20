#include <stdio.h>
/**
 * main - main block
 * Description: print alphabet in reverse order in lowercase
 * Return: 0
 */
int masin(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

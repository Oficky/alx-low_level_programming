#include <stdio.h>
/**
 * main - main code block
 * Description: use 'putchar' function to prints english lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char lower_case_alphbt = 'a';
	char upper_case_alphbt = 'A';

	while (lower_case_alphbt <= 'z' && upper_case_alphbt <= 'Z')
	{
		putchar(lower_case_alphbt);
		lower_case_alphbt++;
		putchar(upper_case_alphbt);
		upper_case_alphbt++;
	}
	putchar('\n');
	return (0);
}

#include < stdio.h >
/**
 * main - main code block
 * Description: use 'putchar' function to prints english lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char lower_case_alphbt = 'a';

	while (lower_case_alphbt <= 'z')
	{
		putchar("%c ", lower_case_alphbt);
		lower_case_alphbt++;
	}
	putchar('\n');
	return (0);
}

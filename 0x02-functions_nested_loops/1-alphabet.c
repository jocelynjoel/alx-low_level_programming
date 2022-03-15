#include <stdio.h>
/**
 * main - alphabat printing
 *
 * Return: 0 on successs
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");

	return (0);
}

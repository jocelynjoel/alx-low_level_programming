#include <stdio.h>
#include"main.h"
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
		_putchar(c);
		c++;
	}
	_putchar("\n");

	return (0);
}

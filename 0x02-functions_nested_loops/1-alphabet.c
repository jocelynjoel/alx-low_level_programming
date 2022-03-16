#include <stdio.h>
#include"main_alx.h"
/**
 * print_alphabet - alphabat printing
 *
 * Return: 0 on successs
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

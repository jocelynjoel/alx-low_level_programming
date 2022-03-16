#include"main.h"
/**
 * print_last_digit - function that prints
 * @x: The input number
 * Return: int.
 */
int print_last_digit(int x)
{
	int ln = x % 10;

	if (x < 0)
		ln = n *  -1;

	_putchar(ln + '0');
	_putchar('\n');
	return (ln);
}

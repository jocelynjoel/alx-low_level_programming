#include"main.h"
/**
 * print_last_digit - function that prints
 * @x: The input number
 * Return: int.
 */
int print_last_digit(int x)
{
	x %= 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	_putchar('\n');
	return (x);
}

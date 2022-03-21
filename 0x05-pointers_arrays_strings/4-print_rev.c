#include"main.h"

/**
 * print_rev - function that print string reverse
 * @str: string value
 *
 * Return: nothing
 */
void print_rev(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		str++;
		i++;
	}
	while (i > 0)
	{
		str--;
		_putchar(*str);
		i--;
	}
	_putchar('\n')
}

#include"main.h"

/**
 * _puts - function that prints string
 * @str: fuction argument
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != \'0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

#include"main.h"

/**
 * print_most_numbers - printing number without 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i += 1;
	}
	_putchar('\n');
}

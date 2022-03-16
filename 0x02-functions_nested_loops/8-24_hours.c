#include"main.h"

/**
 * jack_bauer - print minute
 * starting from
 * Return: nothing
 */
void jack_bauer(void)
{
	int x, y;
	
	while (x <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + 'o');
			_putchar('\n');
			j += 1;
		}
		x += 1;
	}
}

#include"main.h"

/**
 * jack_bauer - print minute
 * starting from
 * Return: nothing
 */
void jack_bauer(void)
{
	int time;
	int x;

	time = 0;

	while (time <= 23)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((time / 10) + '0');
			_putchar((time % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
		time++;
	}
}

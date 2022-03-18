#include"main.h"

/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		int i, j, k;

		for (i = size - 1; i >= 0; i--)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < (size - i); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

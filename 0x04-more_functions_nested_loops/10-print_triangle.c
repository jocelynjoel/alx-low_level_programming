#include"main.h"

/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing.
 */
void print_triangle(int size)
{
	int row, col, aux;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (aux = size -row; aux > 0; aux --)
			{
				_putchar(' ');
			}
			for (col = 0; col < row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
	else
		_putchar('\n');
}

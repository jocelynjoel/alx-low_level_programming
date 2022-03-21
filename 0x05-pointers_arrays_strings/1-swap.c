#include"main.h"

/**
 * swap_int - function that swap two integer values
 * @a: first value
 * @b: second values
 * Return: no
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;


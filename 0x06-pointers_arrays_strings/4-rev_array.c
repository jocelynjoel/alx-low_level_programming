#include"main.h"

/**
 * reverse_array - function that reverse arry content
 * @a: first argument
 * @n: number of array element
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0; i < (n / 2); i++)
	{
		p = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = p;
	}
}

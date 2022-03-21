#include"main.h"

/**
 * main - void function
 *@n: pointer
 * Return: 0
 */
void main(int *n)
{
	int a = 14;

	n = &a;
	*n = 98;
	return (0);

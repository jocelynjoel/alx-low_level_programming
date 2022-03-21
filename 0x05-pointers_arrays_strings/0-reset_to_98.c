#include"main.h"


/**
 * main - void function
 *@n: pointer
 * Return: 0
 */
void main(int n)
{
	int *a = &n;

	*a = 98;
	return (*a);

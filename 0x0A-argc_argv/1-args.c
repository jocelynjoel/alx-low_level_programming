#include<stdio.h>

/**
 * main - function that print the number of argument
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}

#include<stdlib.h>
#include<stdio.h>

/**
 * main - function that print the number of argument
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; argc++)
		print("%s\n", argv[i]);
	return(0);
}

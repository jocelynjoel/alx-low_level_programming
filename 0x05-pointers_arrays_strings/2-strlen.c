#include<string.h>
#include"main.h"

/**
 * _strlen - funtion that return length of char
 * @s: char variable
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

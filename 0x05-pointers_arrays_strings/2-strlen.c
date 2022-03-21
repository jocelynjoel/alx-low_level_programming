#include"main.h"

/**
 * _strlen - funtion that return length of char
 * @s: char variable
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int i =0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

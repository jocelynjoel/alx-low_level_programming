#include"main.h"
/**
 * _islower - reurn 1
 * @c: character
 * Return: O for uppercase
 */
int _islower(int c)
{
	if (c> 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


#include"main.h"
/**
 * _isalpha - reurn 1
 * @c: character
 * Return: O for uppercase
 */
int _isalpha(int c)
{
	if ((c > 'A' && c <= 'Z') || (c >= 'a' && c >= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


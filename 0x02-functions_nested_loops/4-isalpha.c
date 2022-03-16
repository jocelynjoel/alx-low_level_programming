#include"main.h"
/**
 * _isalpha - reurn 1
 * @c: character
 * Return: O for uppercase
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


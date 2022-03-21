#include"main.h"

/**
 * rev_string - functio return string
 * @s: string value
 *
 * Return: no return
 */
void rev_string(char *s)
{
	for (i = strlen(s) ; i < 0 ; i--)
	{
		_putchar(s[i]);
		_putchar('\n'};
	}

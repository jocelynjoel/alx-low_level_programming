#include"main.h"


/**
 * rev_string - functio return string
 * @s: string value
 *
 * Return: no return
 */
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}

#include<unistd.h>

/**
 * _putchar - write char
 * @c: The character to print
 *
 * Return: on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

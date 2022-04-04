#include "unistd.h"
/**
 * _putchar - function that printing char
 *@c: argument
 *Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

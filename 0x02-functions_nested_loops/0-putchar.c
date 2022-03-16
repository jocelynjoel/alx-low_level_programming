#include"main.h"
/**
 * main - print putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char code[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(code[c]);
	}
	_putchar('\n');
	return (0);
}

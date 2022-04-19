#include "main.h"

/**
 * print_char - writes char to stdout
 * @c: arg type in variadic function
 * Return: length of character written to stdout
*/
int print_char(va_list *c)
{
	char ch = va_arg(*c, int);
	int i = sizeof(ch);

	write(1, &ch, i);

	return (i);
}

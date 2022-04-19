#include "main.h"
/**
 * _revstr - reverses string
 * @str: string to be reversed
 * Return: pointer to string
 */

char *_revstr(char *str)
{
	int i, len;
	char ch;

	len = 0;
	if (!str)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;

	for (i = 0; i < (len / 2); i++)
	{
		ch = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = ch;
	}

	return (str);
}

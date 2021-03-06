#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct specifier - Struct specifier
 *
 * @str: The format specifier
 * @func: The function associated
 */
typedef struct specifier
{
	char str;
	int (*func)(va_list *);

} fmt_spec;

int _printf(const char *format, ...);
int (*get_func(char s))(va_list *);
int print_char(va_list *c);
int print_str(va_list *str);
int _strlen(char *str);
char *_itoa(unsigned int arg_int, char *strout, int base);
char *__itoa(int arg_int, char *strout, int base);
char *_revstr(char *str);
int print_int(va_list *p_int);
int print_uint(va_list *p_int);

#endif /* MAIN_H */

#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
void print_s(va_list arg);

typedef struct f_print
{
    char *type;
    void (*f)(va_list arg);
} f_print_;

#endif

#ifndef VARFUNC
#define VARFUNC
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_i(va_list list, char *s);
void print_c(va_list list, char *sep);
void print_s(va_list list, char *sep);
void print_f(va_list list, char *sep);
#endif

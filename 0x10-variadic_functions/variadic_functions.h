#ifndef VAR
#define VAR
#include <stdarg.h>

/**
 * struct print- Defines print options
 * @symb: The symbol represeting the type
 * @func: A pointer to the corresponding function
 */
typedef struct print
{
	char *symb;
	void (*func)(va_list words);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

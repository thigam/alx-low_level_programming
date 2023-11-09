#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void char_printer(va_list words);
void int_printer(va_list words);
void float_printer(va_list words);
void string_printer(va_list words);
void print_all(const char * const format, ...);

/**
 * print_all- Prints anything
 * @format: A list of type passed
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list words;
	int format_index = 0, func_index;
	print_t operations[] = {
		{"c", char_printer},
		{"i", int_printer},
		{"f", float_printer},
		{"s", string_printer}
	};
	char *sep = "";

	va_start(words, format);

	while (format && format[format_index])
	{
		func_index = 0;

		while (func_index < 4 && format[format_index] != *(operations[func_index].symb))
			func_index++;

		if (func_index < 4)
		{
			printf("%s", sep);
			operations[func_index].func(words);
			sep = ", ";
		}

		format_index++;
	}

	va_end(words);

	printf("\n");
}

/**
 * char_printer- Prints characters
 * @wors: character to be printed
 */

void char_printer(va_list words)
{
	char _character;

	_character = va_arg(words, int);
	printf("%c", _character);
}

/**
 * int_printer- Pronts an integer
 * @words: integer
 *
 * Return: nothing
 */

void int_printer(va_list words)
{
	int number;

	number = va_arg(words, int);
	printf("%d", number);
}

/**
 * float_printer- Prints floats
 * @words: float
 *
 * Return: nothing
 */

void float_printer(va_list words)
{
	float number;

	number = va_arg(words, double);
	printf("%f", number);
}

/**
 * string_pointer- Prints a string
 * @words: string
 *
 * Return: nothing
 */

void string_printer(va_list words)
{
	char *_string;

	_string = va_arg(words, char *);

	if (_string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", _string);
}

#include "maih.h"

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 * @...: Additional arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			int num = va_arg(args, int);

			printed_chars += _print_number(num);
			format += 2; /*Skip %d or %i*/
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			write(1, "%", 1);
			printed_chars++;
			format += 2;
		}
		else
		{
			write(1, format, 1);
			printed_chars++;
			format++;
		}
	}

	va_end(args);

	return (printed_chars);
}

/**
 * _print_number - Helper function to print integers
 * @num: Integer to print
 *
 * Return: Number of characters printed
 */
int _print_number(int num)
{
	/*Convert the integer to a string and print it*/
	char buffer[12];
	int length = sprintf(buffer, "%d", num);

	write(1, buffer, length);
	return (length);
}

/**
 * main - Entry point of the program, prints formatted text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_printf("This is a number: %d\n", 42);
	_printf("Another number: %i\n", -123);
	_printf("Printing a percent sign: %%\n");
	_printf("Random text %d and %i mixed with %% symbols\n", 10, 20);

	return (0);
}

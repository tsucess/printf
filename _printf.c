#include "main.h"
/**
 * _printf - function that replicate the printf function
 * @format: format parameter
 * @...: variable parameter
 *
 * Return: interger
 */
int _printf(const char *format, ...)
{
	unsigned int a, r_val = 0;
	va_list vargs;

	va_start(vargs, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			_putchar(va_arg(vargs, char));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			int r_int = _putstr(va_arg(vargs, char *));
			a++;
			r_val += (r_int - 1);
		}
		r_val++;
	}
}

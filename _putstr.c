#include "main.h"
/**
 * _putstr - function that prints a string using our putchar in
 * standard input output library
 * @str: character parameter
 * Return: interger value
 */
int _putstr(char *str)
{
	int i, r_value = 0;

	if (str == NULL)
	{
		write(1, "NULL", 1);
		return (-1);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		r_value++;
	}
	_putchar('\n');
	return (r_value);
}

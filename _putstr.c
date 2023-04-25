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

	if (str)
	{
		for (i = 0; str[i] != '0'; i++)
		{
			_putchar(str[i]);
			r_value++;
		}
	}
	return (r_value);
}

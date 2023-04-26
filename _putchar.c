#include "main.h"
/**
 * _putchar - function that replicate putchar in
 * standard input output library
 * @c: character parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

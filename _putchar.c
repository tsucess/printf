#include "main.h"
/**
 * _putchar - function that replicate putchar in
 * standard input output library
 * @c: character parameter
 * Return: interger value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>
/**
 * _putchar - writes the character to standard output
 * @c: Character to print
 * Return: On sucess, 1. 
 * On failure, -1
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standout
 * @c: The chrcter 
 * Retrun: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

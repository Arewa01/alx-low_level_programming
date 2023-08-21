#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - the sum of a and b
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - the difference of a and b
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - the product of a and b
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - the quotient of a and b
 * @a: the first number
 * @b: the second number
 * Return: the quotient of a and b
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - the modulus of a and b
 * @a: the first number
 * @b: the second number
 * Return: the modulus of a and b
 */
int mod(int a, int b)
{
	return (a % b);
}

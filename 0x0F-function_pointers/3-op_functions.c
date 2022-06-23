#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add
 * @a: num
 * @b: num
 * Return: sum of a b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract
 * @a: num
 * @b: num
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product
 * @a: num
 * @b: num
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: num
 * @b: num
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: num
 * @b: num
 * Return: remainder
 */
int op_mod(int a, int b)
{
return (a%b);
}

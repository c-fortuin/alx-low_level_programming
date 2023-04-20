#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns the sum of two numbers
 * @a: First number
 * @b: Second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - Returns the product of 2 numbers
 * @a: First number
 * @b: Second number
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: First number
 * @b: Second number
 * Return: Division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the modulus of two numbers
 * @a: First number
 * @b: Second number
 * Return: Modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
/**
 * op_sub - Returns the subtraction of two numbers
 * @a: First number
 * @b: Second number
 * Return: Substraction of a and b
 */
int op_sub(int a, int b)
{
        return (a - b);
}

#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add- Sum of two numbers
 * @a: First number
 * @b: Second number
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- Difference of two numbers
 * @a: First number
 * @b: Second number
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
        return (a - b);
}
/**
 * op_mul- Product of two numbers
 * @a: First number
 * @b: Second number
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 * op_div- Division of two numbers
 * @a: First number
 * @b: Second number
 * Return: Division of a and b
 */
int op_div(int a, int b)
{
        return (a / b);
}
/**
 * op_add- Modulus of two numbers
 * @a: First number
 * @b: Second number
 * Return: Modulus of a and b
 */
int op_mod(int a, int b)
{
        return (a % b);
}

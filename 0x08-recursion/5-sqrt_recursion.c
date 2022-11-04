#include "main.h"

/**
 * find_power -> returns the natural square root of a number.
 * @n: input number
 * @c: iterator
 * Return: square root or -1
 */
int find_power(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + find_power(n, c + 1));
}
/**
 * _sqrt_recursion -> returns the natural square root of a number
 * @n: inputer number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_power(n, 2));
}

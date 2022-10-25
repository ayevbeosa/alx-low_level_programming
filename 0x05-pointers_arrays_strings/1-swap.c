#include "main.h"
/**
 * swap_int - swaps 2 int
 * @a: first parameter
 * @b: second parameter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}

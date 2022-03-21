#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer pointing to the first value
 * @b: pointer pointing to the second value
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

#include "main.h"
/**
 * swap_int - swap the value ot two integers
 * @a: points to the first value
 * @b: points to the second value
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

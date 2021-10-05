/*
 * File: 4-rev_array.c
 * Auth: Isaac Abitey
 */

#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int t, x;

	for (x = n - 1; x >= n / 2; x--)
	{
		t = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = t;
	}
}

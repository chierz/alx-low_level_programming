#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers
 *@a: pointer to the integer
 *@n: number of elements of the array
 *Return: void
 */

void reverse_array(int *a, int n)

{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

}

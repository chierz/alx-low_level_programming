#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Calc and print the sum of diagonals in a square matrix.
 * @a: Pointer to the matrix.
 * @size: Size of the matrix.
 */

/*Calculate the sums of the diagonals*/
void print_diagsums(int *a, int size)
{
	int main_diag_sum = 0;/*Sum of main diagonal*/
	int secondary_diag_sum = 0;/*Sum of secondary diagonal*/
	int i;

	/*Calculate the sums of the diagonals*/
	for (i = 0; i < size; i++)
	{
		main_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", main_diag_sum, secondary_diag_sum);
}

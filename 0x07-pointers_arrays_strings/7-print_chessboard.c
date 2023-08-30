#include "main.h"
#include <string.h>

/**
 *print_chessboard - a function that prints the chessboard
 *@a: pointer to array
 *@[]: array
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);  /*Print the character from the board*/
		}
		_putchar('\n');  /*Move to the next row*/
	}
}


#include <stdio.h>
#include "main.h"
/**
 *print_chessboard- executes funtion
 *@a: points to a 2 dimentional array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;
	char pices[8] = {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'};
	char pawns[8] = {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'};
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			switch (i)
			{
				case 0:
					a[i][j] = pices[j];
					break;
				case 1:
					a[i][j] = pawns[j];
					break;
				case 6:
					a[i][j] = pawns[j] - 32;
					break;
				case 7:
					a[i][j] = pices[j] - 32;
					break;
			} /*end switch*/
			_putchar('\'');
			_putchar(a[i][j]);
			_putchar
		} /*end for*/
	} /*end outer for*/
} /*end function*/

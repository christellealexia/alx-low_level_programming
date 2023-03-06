#include "main.h"
/**
 * print_chessboard- prints the chessboard
 * @ char(*a)[8]): array used
 * Return: Always 0
 */
 void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = a; j <= h; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}


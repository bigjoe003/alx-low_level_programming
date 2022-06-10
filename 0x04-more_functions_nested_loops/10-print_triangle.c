#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the trianle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			_putchar(' ');
		}
		for (tr = 0; tr <= ro; tr++)
		{
			_putchar('\n');
		}
	}
}

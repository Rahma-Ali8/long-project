#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if the input is digit from 0 to 9
 *
 * @c: input
 *
 * Return: 1 if the input is digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

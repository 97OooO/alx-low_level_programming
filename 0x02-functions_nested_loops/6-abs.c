#include "main.h"

/**
 * _abs - takes an integer as input and
 * return it's absolute value as an integer
 *
 * @nmb: the int to check
 * Return: the absolute value of int
 */

int _abs(int nmb)
{
	if (nmb < 0)
	{
		return -nmb;
	}
	else
	{
		return nmb;
	}
}

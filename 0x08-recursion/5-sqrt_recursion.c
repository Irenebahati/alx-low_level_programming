#include "main.h"

/**
 * calculate_sqrt - assists in getting the square root of an integer
 * @n: number whose square root is to be calculated
 * @start: the begining of the range of the integer
 * @end: the end of the range of the integer
 * Return: -1 if unsuccessful
 */
int calculate_sqrt(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + (end - start) / 2);
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (calculate_sqrt(n, mid + 1, end));
		}
		else
		{
			return (calculate_sqrt(n, start, mid - 1));
		}
	}
	return (-1);
}

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: number whose square root should be calculated
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate_sqrt(n, 0, n));
}

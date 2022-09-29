#include "main.h"

/**
 * helperFunction - returns 0 or 1.
 * @num: number being checked.
 * @l: possible factor of the number.
 *
 * Return: 0 if not prime, 1 of prime.
 */

int helperFunction(int num, int l)
{
	if (l < num)
	{
		if (num % l == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, l + 1));
		}
	}
	else
	{
		return (l);
	}
}

/**
 * is_prime_number - checks if number is prime or not.
 * @n: number to be checked.
 *
 * Return: 1 if number is prime.
 * 0 if number is not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}

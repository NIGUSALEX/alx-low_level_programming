#include "main.h"

/**
 * last_index - returns the last index of a string (counts the null char)
 * @s: pointer the string
 * Return: int
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

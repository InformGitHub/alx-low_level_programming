#include "main.h"

int checking_palindrome(char *s, int l, int k);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * and 0 if not
 *
 * @s: string to reverse
 * Return: 1, if it's; 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (checking_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string measuring
 * Return: l
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
		l++;
	return (l + _strlen_recursion(s + 1));
}

/**
 * checking_palindrome - checking caracter recursively for palindrome
 *
 * @s: string-checking
 * @l: lenght of string
 * @k: iterator
 * Return: 1 if palindrome; 0 if not
 */
int checking_palindrome(char *s, int l, int k)
{
	if (*(s + k) != *(s + l - 1))
		return (0);
	else if (k >= l)
		return (1);
	return (checking_palindrome(s, k + 1, l - 1));
}

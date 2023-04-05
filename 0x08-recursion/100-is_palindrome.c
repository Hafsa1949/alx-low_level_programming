#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen(s + 1) + 1);
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: the string
 * @len: the length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	if (len <= 1)
		return (1);

	return (check_palindrome(s, len));
}

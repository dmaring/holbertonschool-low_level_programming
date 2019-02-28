#include "holberton.h"

/**
 * str_end - get end of string
 * @s: input string
 *
 * Return: pointer to end of string
 */
char *str_end(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return (str_end(s + 1));
}

/**
 * rev_str_cmp - compare the strings
 * @s: input string1
 * @r: input string2
 *
 * Return: 1 if strings match, 0 if not
 */
int rev_str_cmp(char *s, char *r)
{
	if (*s == '\0')
		return (1);
	if (*s != *r)
		return (0);
	return (rev_str_cmp(s + 1, r - 1));
}

/**
 * is_palindrome - return 1 if palindrome, 0 if not
 * @s: input string
 *
 * Return: return 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	char *r = str_end(s);

	return (rev_str_cmp(s, r));

}

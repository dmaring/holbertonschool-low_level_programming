#include "holberton.h"

/**
 * _atoi - convert a string of numbers to an integer
 * @s: input string
 *
 * Return: integer equivalent to input string
 */
int _atoi(char *s)
{

	int _isnum(char c);
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		if ((s[i] == '-') && (_isnum(s[i + 1])))
		{
			sign = -1;
			i++;
		}
		if (_isnum(s[i]))
		{
			result = (result * 10) + (s[i] - '0');
			i++;
		}
	}
	return (result * sign);
}

int _isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

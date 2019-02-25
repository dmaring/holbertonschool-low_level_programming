#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment string
 * @accept: bytes to check for in s
 *
 * Return: number of bytes in accept that exist in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, result, flag;

	result = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				result++;
				flag = 1;
			}
		}
		if (flag != 1)
			return (result);
	}

	return (result);
}

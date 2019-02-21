#include "holberton.h"

/**
 * _strcmp - function to compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: result integer of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	result = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			return (s1[i] - s2[i]);

	}

	return (result);
}

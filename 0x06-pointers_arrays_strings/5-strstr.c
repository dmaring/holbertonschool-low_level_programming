#include "holberton.h"
#define NULL 0

/**
 * _strstr - function that locates a substring in a string
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to start of found string or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		k = i;
		while (needle[j] != '\0' && haystack[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
			k++;
		}
		i++;
	}
	return (NULL);
}

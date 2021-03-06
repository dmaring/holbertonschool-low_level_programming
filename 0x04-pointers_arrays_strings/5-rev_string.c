#include <stdio.h>

/**
 * rev_string - reverse a string in place by pointer
 * @s: pointer to string
 *
 */
void rev_string(char *s)
{
	int _strlen(char *s);
	int i, length;
	char *beg, *end;
	char temp;

	length = _strlen(s);
	beg = s;
	end = s;

	for (i = 0; i < length - 1; i++)
		end++;

	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *beg;
		*beg = temp;

		beg++;
		end--;
	}
}
/**
 * _strlen - find the length of a string
 * @s: input string pointer
 *
 * Return: string length 
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	return (i);
}

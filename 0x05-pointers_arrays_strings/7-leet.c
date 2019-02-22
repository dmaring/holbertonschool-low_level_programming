# include "holberton.h"

/**
 * leet - encode a string into leet
 * @s: input string
 *
 * Return: pointer to modified array
 */
char *leet(char *s)
{
	int i, j;

	char alpha[] = "aAeEoOtTlL";
	char leetstr[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == alpha[j])
				s[i] = leetstr[j];
		}
	}
	return (s);
}

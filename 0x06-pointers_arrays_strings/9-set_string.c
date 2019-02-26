#include "holberton.h"
#include "stdio.h"

/**
 * set_string - sets the value of the pointer to char
 * @s: pointer to a pointer to a value
 * @to: pointer to set @s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}

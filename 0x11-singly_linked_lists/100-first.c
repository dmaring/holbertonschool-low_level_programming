#include <stdio.h>

void printBeforeMain(void) __attribute__((constructor));

/** implementation of printBeforeMain **/
void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

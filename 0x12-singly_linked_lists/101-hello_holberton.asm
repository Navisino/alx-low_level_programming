#include <stdio.h>

/**
 * before_main - Print statement within this fxn before running main fxn.
 */
void __attribute__((constructor)) before_main(void)
{
	printf("Hello, Holberton\n");
}

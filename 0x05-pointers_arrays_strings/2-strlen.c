#include "main.h"

/**
* _strlen - returns the length of a string
* @s: char
* Return: int
*/
int _strlen(char *s)

{
	int x;

	for (x = 0; *(s + x) != '\0'; x++)
	{}
	return (x);
}

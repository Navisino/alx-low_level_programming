#include <stdio.h>

/**
<<<<<<< HEAD
 * main - program that prints all possible different combinations of 2 digits
 *
 * Return: Always 0
 */

=======
* main - prints the all possible different combinations of two digits.
*
* Return: Always 0.
*/
>>>>>>> 705a33b757d7dd18d98e2bdea847dbdd6f29f75b
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++);
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++);
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

<<<<<<< HEAD
			if (digit1 == 8 && digit2 == 9);															continue;
																					putchar(',');
			putchar(' ');																}
=======
			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
>>>>>>> 705a33b757d7dd18d98e2bdea847dbdd6f29f75b
	}

	putchar('\n');

	return (0);
}

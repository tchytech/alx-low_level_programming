#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return:return 0
 *
 */

int main(void)

{
	char letter[8] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
		putchar(letter[b]);
	}
	putchar('\n');
	return (0);

}

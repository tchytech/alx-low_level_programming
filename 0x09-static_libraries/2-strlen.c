#include "main.h"

/**
 * _strlen - returns the lenth of a string
 *
 * @s: string
 * Return: 0
 *
 */

int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}

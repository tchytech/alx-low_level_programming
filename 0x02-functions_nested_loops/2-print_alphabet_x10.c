#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Return: Always(0).
 */
void print_alphabet_x10(void)
{
	int letter_count = 0;

	while (letter_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		letter_count++;
		_putchar('\n');
	}
}

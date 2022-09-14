#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 *
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{
	int num1, num2, i, n;
	int next_num;

	n = 98;

	for (i = 1; i <= n; i++)
	{
		if (i == 98)
		{
			printf("%d, ", num2);
		}
		else
		{
			printf("%d, ", num2);
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
		}
	}
	printf("\n");
	return (0);
}

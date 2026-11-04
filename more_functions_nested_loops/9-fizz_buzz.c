#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, replacing multiples of 3
 * with Fizz, multiples of 5 with Buzz, and multiples of both with FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}

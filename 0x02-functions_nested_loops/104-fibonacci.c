/*
 * File: 104-fibonacci.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long first_half, second_half;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		first_half = fib1_half1 + fib2_half1;
		second_half = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			first_half += 1;
			second_half %= 10000000000;
		}

		printf("%lu%lu", first_half, second_half);
		if (count != 98)
		{
			printf(", ");
		}

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = first_half;
		fib2_half2 = second_half;
	}
	printf("\n");
	return (0);
}

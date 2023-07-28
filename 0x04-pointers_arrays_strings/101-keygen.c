/*
 * File: 101-keygen.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, first_diff_half, second_diff_half;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		first_diff_half = (sum - 2772) / 2;
		second_diff_half = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			first_diff_half++;
		}

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + first_diff_half))
			{
				password[index] -= first_diff_half;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + second_diff_half))
			{
				password[index] -= second_diff_half;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}

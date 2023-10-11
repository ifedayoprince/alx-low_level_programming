/**
 * File: 4-add.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


bool isnumber(char string[]);

int main (__attribute__((unused)) int argc, __attribute__((unused)) char *argv[])
{
	int i = 1;
	int sum = 0;
	while (i < argc)
	{
		if (!isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		
		i++;
	}

	printf("%d\n", sum);

	return (0);
}

bool isnumber(char string[])
{
	int len = strlen(string);
	int i = 0;
	while (i < len)
	{
		if (isdigit(string[i]) == 0)
			return false;

		i++;
	}

	return true;
}

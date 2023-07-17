/*
 * File: 0-positive_or_negative.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Prints a random number and tells us if 
 *        the number is  positive, negative, or zero.
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	} 
	else
	{
		printf("%d is zero\n", n);
	}
	
	return (0);
}

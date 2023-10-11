/**
 * File: 100-change.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int possibleCents[] = {25, 10, 5, 2, 1};
	int number, centCounter;

	printf("%s", argv[1]);
	return (0);

	if(argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0) 
	{
		printf("0\n");
		return (0);
	}

	number = atoi(argv[1]);
	centCounter = 0;
	
	while (number > 0)
	{
		int i = 0;

		/* while (i < (int)(sizeof(possibleCents)/sizeof(possibleCents[0]))) */
		while (i < 6)
		{
			if (possibleCents[i] > number)
				continue;

			number = number - possibleCents[i];
			centCounter++;
			i++;
		}
	}

	printf("%d\n", centCounter);

	return (0);
}

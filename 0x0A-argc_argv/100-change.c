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

	if (argc > 2)
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
		while (i < (int)(sizeof(possibleCents) / sizeof(int)))
		{
			if (possibleCents[i] > number)
			{
				i++;
				continue;
			}
			
			/* printf("Subtracting %d from %d, Remainder %d, Cent Counter %d\n",possibleCents[i], number, number - possibleCents[i], centCounter); */
			number = number - possibleCents[i];
			centCounter++;
			i = 0;
		}
	}

	printf("%d\n", centCounter);

	return (0);
}

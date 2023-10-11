/**
 * File: 2-args.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int i = 0;
	while (i < argc) 
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

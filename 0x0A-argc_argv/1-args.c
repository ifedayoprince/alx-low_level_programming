/**
 * File: 1-args.c
 * Auth:Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

int main(int argc, __attribute__((unused)) char *argv[]) 
{
	printf("%d\n", argc-1);
	return (0);
}

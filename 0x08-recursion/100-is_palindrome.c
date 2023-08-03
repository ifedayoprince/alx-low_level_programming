/*
 * File: 7-is_palindrome.c
 * Author: Ifedayo P Oni
 */

#include "main.h"

int find_strlength(char *s);
int check_palindrome(char *s, int lengthgth, int index);
int is_palindrome(char *s);

/**
 * find_strlengthgth - Returns the lengthgth of a string.
 * @s: The string to be measured.
 *
 * Return: The lengthgth of the string.
 */
int find_strlength(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlength(s + length);
	}

	return (length);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @length: The lengthgth of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);

	if (s[index] == s[length - index - 1])
		return (check_palindrome(s, length, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int length = find_strlength(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, length, index));
}

[B/*
* File: 0-isupper.c
* Auth: Brennan D Baraban
*/

#include "main.h"
/**
* _isupper - Checks for uppercase characters.
* @c: The chracter to be checked.
* Return: 1 if chracter is uppercase, 0 otherwise.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}

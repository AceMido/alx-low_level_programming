#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: take it from main
 * Return: the length of the string in int
 */
int _strlen(char *s)
{
	int length;

	length = sizeof(s) / sizeof(s[0]);
	return (length);
}

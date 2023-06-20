#include "main.h"
/**
 * _isalpha - checks for alphabets
 *
 * @c: the var to be checked
 *
 * Return: 1 if its a char else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}	

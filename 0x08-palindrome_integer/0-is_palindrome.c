#include "palindrome.h"


/**
 * is_palindrome - Checks if number is palindrome
 * @n: the number lol
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long addition = n % 10;
	unsigned long number = n;

	while (number /= 10)
		addition = (addition * 10) + (number % 10);

	return (n == addition);
}

#include "holberton.h"

/**
 * *cap_string - Capitalizes the first letter of each word in a string
 * @s: given string
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i])
	{
		switch (s[i - 1])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			break;
		}

		i++;
	}

	return (s);
}

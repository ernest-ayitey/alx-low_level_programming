#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalize all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 *
 */

char *cap_string(char *str)
{
	int j = 0;

	while (str[j])
	{
		while (!(str[j] >= 'a' && str[j] <= 'z'))
			j++;
		if (str[j - 1] == ' ' ||
				str[j - 1] == ' ' ||
				str[j - 1] == '\t' ||
				str[j - 1] == '\n' ||
				str[j - 1] == ',' ||
				str[j - 1] == ';' ||
				str[j - 1] == '.' ||
				str[j - 1] == '!' ||
				str[j - 1] == '?' ||
				str[j - 1] == '"' ||
				str[j - 1] == '(' ||
				str[j - 1] == ')' ||
				str[j - 1] == '{' ||
				str[j - 1] == '}' ||
				j == 0)
			str[j] -= 32;

		j++;
	}
	return (str);
}

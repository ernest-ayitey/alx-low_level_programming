#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for 
 *function that encodes a string into 1337
 *
 *letters l and L should be replaced by 1
 *
 * Return: Always 0.
 */


char *leet(char *str) {
	char *encoded = (char *)malloc(sizeof(char) * strlen(str) + 1);
	int i = 0;

	while (str[i] != '\0') {
		char c = str[i];
		if (c == 'a' || c == 'A')
			encoded[i] = '4';
		else if (c == 'e' || c == 'E')
			encoded[i] = '3';
		else if (c == 'o' || c == 'O')
			encoded[i] = '0';
		else if (c == 't' || c == 'T')
			encoded[i] = '7';
		else if (c == 'l' || c == 'L')
			encoded[i] = '1';
		else
			encoded[i] = c;

		i++;
	}

	encoded[i] = '\0';
	return (encoded);
}

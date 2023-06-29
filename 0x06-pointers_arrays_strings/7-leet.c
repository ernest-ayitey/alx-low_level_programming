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
	char *result = (char *)malloc(sizeof(char));

	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] == 'a' || str[i] == 'A') {
			result[j] = '4';
		} else if (str[i] == 'e' || str[i] == 'E') {
			result[j] = '3';
		} else if (str[i] == 'o' || str[i] == 'O') {
			result[j] = '0';
		} else if (str[i] == 't' || str[i] == 'T') {
			result[j] = '7';
		} else if (str[i] == 'l' || str[i] == 'L') {
			result[j] = '1';
		} else {
			result[j] = str[i];
		}

		i++;
		j++;
		result = (char *)realloc(result, (j + 1) * sizeof(char));
	}

	result[j] = '\0';
	return result;
}


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
#include <stdlib.h>

char *leet(char *str) {
	char *result = (char *)malloc(sizeof(char));
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] == 'a' || str[i] == 'A') {
			_putchar('4');
		} else if (str[i] == 'e' || str[i] == 'E') {
			_putchar('3');
		} else if (str[i] == 'o' || str[i] == 'O') {
			_putchar('0');
		} else if (str[i] == 't' || str[i] == 'T') {
			_putchar('7');
		} else if (str[i] == 'l' || str[i] == 'L') {
			_putchar('1');
		} else {
			_putchar(str[i]);
		}

		i++;
	}

	return result;
}


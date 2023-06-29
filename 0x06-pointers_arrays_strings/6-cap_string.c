#include <stddef.h>  // for size_t

char *_putchar(char c);

char *cap_string(char *str) {
	// Array of word separators
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	int capitalize_next = 1;  // Flag to indicate if the next character should be capitalized

	// Iterate through each character in the string
	for (size_t i = 0; str[i] != '\0'; i++) {
		// Check if the current character is a word separator
		int is_separator = 0;
		for (size_t j = 0; separators[j] != '\0'; j++) {
			if (str[i] == separators[j]) {
				is_separator = 1;
				break;
			}
		}

		// If the current character is a separator, set the flag to capitalize the next character
		if (is_separator) {
			capitalize_next = 1;
		}
		// If the current character is a letter and the flag is set, capitalize it
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z')) {
			_putchar(str[i] - 32);
			capitalize_next = 0;
		}
		// Otherwise, just print the character as it is
		else {
			_putchar(str[i]);
			capitalize_next = 0;
		}
	}

	return (str);
}


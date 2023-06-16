#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 *This program generates a random number and prints the last digit
 *and certain conditional information
 *Return: Always 0 (indicating success)
 */
int main(void)
{
	int n, lastDigit;
	/* Generate a random number and assign it to variable n*/
        srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	/* Print the result based on the last digit */
	printf("Last digit of %d is %d and ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("is greater than 5\n");
        } else if (lastDigit == 0)
	{
		printf("is 0\n");
	} else
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}

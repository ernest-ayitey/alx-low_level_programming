#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* main - goes here*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
       	{
		printf("%d is positive.\n", n);
	} else if (n < 0)
       	{
		printf("%d is negative.\n", n);
	} else
       	{
		printf("0 is zero.\n");
	}
	return (0);
}

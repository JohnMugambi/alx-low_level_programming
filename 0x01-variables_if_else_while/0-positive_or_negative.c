#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes here */
/* main -progra entry
 * Return: 0 - no error
 */
/* betty style doc for function main oes there */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%d is positive\n", n);
	}
	else if(n<0)
	{
		printf("%d is negative\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *  main - This is where the execution of the programme starts.
 *  return: 0 (means success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i zero\n", n);

	return (0);
}


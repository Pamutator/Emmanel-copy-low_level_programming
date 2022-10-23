#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - assign a random number to variable n each time it is executed.
  * Return:0-no error, non zero value if error
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d  and is 0\n", n, ld);
	else
		printf("Last digit of %d is %d  and is less than 6 snd not 0\n", n, ld);
	return (0);
}

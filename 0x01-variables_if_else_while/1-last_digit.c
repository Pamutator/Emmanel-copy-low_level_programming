#include <stdlib.h>
#include <time.h>
#include <time.h>
/**
  * main-this program will assing a random number to the variable.
  * Return:0-no error, non zero value if error
  **/
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ldigit);
	}
	else if (ldigit == 0)
	{
		print("Last digit of %d is %d  and is 0\n", n, ldigit);
	}
	else if (ldigit < 6 && ldigit != 0)
	{
		print("Last digit of %d is %d  and is less than 6 snd not 0\n", n, ldigit);
	}
	return (0);
}

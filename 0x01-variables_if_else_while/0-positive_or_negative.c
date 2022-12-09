#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
in main(void)
  {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	     print("%d is negtive\n",n);
	else if (n == 0)
	     print("%d is zero\n",n);
	else 
	     print("%d is positive\n",n);
	return (0);
  }

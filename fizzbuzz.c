
/***********************************************************
*Name: FizzBuzz.c                                          *
*Author: Jabari Dawkins                                    *
*Description: The FizzBuzz program reads an integer input  *
*             by the user (n), where n >= 1 and n <= 10000 *
*             then prints the values from 1 to n, except in*
*             the following cases:                         *
*                1) If the value divides into 3 evenly,    *
*                   "fizz" is printed in it's place.       *
*                2) If the value divides into 5 evenly,    *
*                   "buzz" is printed in it's place.       *
*                3) If the value divides into 15 evenly,   *
*                   "fizzbuzz" is printed in it's place.   *
************************************************************/

#include <stdio.h>

int main() {
	unsigned int max=0;
	printf("FizzBuzz program\n--\n");
	printf("Enter max integer (n): ");
	scanf("%u", &max);
	while (max > 10000 || max == 0) {
		printf("The integer is outside of bounds, please re-enter a value: ");
		scanf("%u", &max);
	}
	int i = 1;
	while(i <= max) {
		if (i % 15==0)
			printf("fizzbuzz\n");
		else if (i % 5 == 0)
			printf("buzz\n");
		else if (i % 3 == 0)
			printf("fizz\n");
		else
			printf("%u\n",i);
		i++;
	}
	return 0;
}
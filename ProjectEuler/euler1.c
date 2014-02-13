#include <stdio.h>

int main() {
	int i, lim, sum;
	printf("Enter ceiling: ");
	scanf("%d", &lim);
	for(i = 1; i < lim; i++) {
		if(i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("Sum of multiples of 3 or 5 below %d is %d\n", lim, sum);
}
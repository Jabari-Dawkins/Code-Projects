#include <stdio.h>

int main() {
	int limit, i, sum = 2, curr = 2, prev = 1;
	printf("Enter Upper-bound for Fibonacci values: ");
	scanf("%d", &limit);
	if(limit < 2) {
		printf("Sum of even Fibonacci values up to %d is %d\n", limit, 0);
		return 0;
	}

	while(curr <= limit) {
		curr += prev;
		prev = curr - prev;
		if(curr % 2 == 0) {
			sum += curr;
		}
	}
	printf("Sum of even Fibonacci values up to %d is %d\n", limit, sum);
	return 0;
}
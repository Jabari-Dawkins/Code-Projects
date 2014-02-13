#include <stdio.h>
#include <pthread.h>

int getTriangleNumber(int index) {
	int i, triangle = (index*(index+1))/2;
	return (index*(index+1))/2;
}

int getFactorCount(int triangleNum) {
	int i, factors = 2;
	if(triangleNum == 1)
		return 1;
	for(i = 2; i < triangleNum; i++) {
		if(triangleNum % i == 0) {
			factors++;
		}
	}
	return factors;
}

int main() {
	int numDivs, index = 1, triNum, fCount = 0;
	printf("Enter number of divisors: ");
	scanf("%d", &numDivs);
	do{
		triNum = getTriangleNumber(index);
		fCount = getFactorCount(triNum);
		index++;
	}while(fCount < numDivs);
	printf("First triangular number with %d or more divisors is %d, with  %d divisions\n", numDivs, triNum, fCount);
	return 0;
}


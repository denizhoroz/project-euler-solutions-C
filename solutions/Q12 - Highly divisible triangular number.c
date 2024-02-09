/*

What is the value of the first triangle number to have over five hundred divisors?

*/

#include <stdio.h>

long triSum(long N) {
	
	long sum = 0;
	
	for(long i = 1; i <= N; i++) {
		sum += i;
	}
	
	return sum;
}

long fCount(long N) {
	
	long count = 0;
	
	for(long i = 1; i <= N; i++) {
		if(N%i==0) {
			count++;
		}
	}
	
	return count;
}

int main() {
	
	long num = 0, count = 0;
	
	while(1) {
		num++;
		
		if(fCount(triSum(num)) > 320) {
			printf("%ld %ld", triSum(num), fCount(triSum(num)));
			
			break;
		}
	}
	
}


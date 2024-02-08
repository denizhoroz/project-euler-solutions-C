/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include <stdio.h>

int isPrime(int N) {
	
	int isPrime = 1;
	
	for(int dvs = 2; dvs < N; dvs++) {
		if(N%dvs == 0) {
			isPrime = 0;
			break;
		}	
	}
	
	return isPrime;
}

int main() {
	
	int count = 1, num = 2;
	             
	while (count <= 10001) {
		if(isPrime(num)) {
			printf("%d) %d\n", count, num);
			count++;
		}
		num++;	
	}	
}

// Answer is 104743


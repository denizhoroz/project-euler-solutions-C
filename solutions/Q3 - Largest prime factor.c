/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

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
	
	long long int dvdt = 600851475143, dvsr = 2;
	
	while(dvdt > dvsr) {
		if(isPrime(dvsr) && dvdt%dvsr == 0) {
			printf("%llu\n", dvsr); // prints other prime factors
			dvdt /= dvsr;
		} else {
			dvsr++;
		}
	}
	
	printf("\n%llu", dvdt); // prints the largest prime factor
}

// Answer is 6857
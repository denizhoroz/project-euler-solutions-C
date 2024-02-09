/*

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

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
	
	long long int i = 1, prime = 1, sumPrimes = 5;
	
	while(((6 * i) + 1) < 2000000) {
		prime = (6 * i) - 1;
		
		if(isPrime(prime)) {
			printf("%d\n", prime);
			sumPrimes += prime;
		}
		
		prime = (6 * i) + 1;
		
		if(isPrime(prime)) {
			printf("%d\n", prime);
			sumPrimes += prime;
		}
		
		i++;
	}
	
	printf("\n%d", sumPrimes);
	
}
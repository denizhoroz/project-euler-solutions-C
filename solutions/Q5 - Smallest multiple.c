/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <stdio.h>


int main() {
	
	int N = 1, divisibility = 1;
	
	while(1) {
		for (int i = 2; i <= 20; i++) {
			if(!(N%i == 0)) {
				divisibility = 0;
				break;
			}
		}
		if (divisibility == 0) {
			printf("%d\n", N); //// for debug
			N++;
			divisibility = 1;
		} else {
			break;
		}
	}
	
	printf("%d", N);
}

// Answer is 232792560
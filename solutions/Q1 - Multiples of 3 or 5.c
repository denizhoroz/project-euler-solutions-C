/*

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

#include <stdio.h>

int main() {
	
	int sortN, sum = 0;
	
	for(sortN = 1; sortN < 1000; sortN++) {
		if(sortN%3 == 0 || sortN%5 == 0) {
			sum += sortN;
		}
	}
	printf("%d", sum);
}

// Answer is 233168
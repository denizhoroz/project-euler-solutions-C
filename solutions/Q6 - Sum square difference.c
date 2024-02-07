/*

	Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include <stdio.h>


int main() {
	
	int SumOfSquare = 0, SquareOfSum = 0;
	
	for (int i = 1; i <= 100; i++) {
		SumOfSquare += (i * i);
	}
	
	for (int i = 1; i <= 100; i++) {
		SquareOfSum += i;
	}
	
	SquareOfSum *= SquareOfSum;
	
	printf("%d", SquareOfSum - SumOfSquare);

}

// Answer is 25164150
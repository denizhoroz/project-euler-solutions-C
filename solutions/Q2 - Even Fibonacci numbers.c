/*

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

*/

#include <stdio.h>

int main() {
	
	int n1 = 1, n2 = 1, n3 = 0, sum = 0;
	
	while(n3 < 4000000) {
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		
		if(n3%2 == 0) {
			sum += n3;
		}
	}
	printf("%d", sum);
}

// Answer is 4613732
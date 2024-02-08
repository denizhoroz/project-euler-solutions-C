/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <stdio.h>


int main() {
	
	int a, b, c, ans = 0;
	
	for(b = 1; b <= 500; b++) {
		for(a = 1; a <= 500; a++) {
			c = 1000 - (a + b);
			
			if((a * a) + (b * b) == (c * c)) {
				printf("%d\n%d\n%d\n\n", a, b, c);
				ans = 1;
			}
			if(ans)
				break;
		}
		if(ans)
			break;
	}
	
	printf("%d", a * b * c);
}

// Answer is 31875000
/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <stdio.h>


int main() {
	
	// Largest palindrome made from the product of two 3-digit number could be between 320x320 = 102,400 to 999x999 = 998,001
	// So we're dealing with 6 digit numbers
	
	int lastProduct, bigPlnd, n1 = 320, n2 = 320;
	int dg1, dg2, dg3, dg4, dg5, dg6;
	
	while (n2 <= 999) {
		while (n1 <= 999) {
			lastProduct = n1 * n2;
			
			// Digit Seperator for 6 digit numbers
			dg6 = lastProduct / 100000; 
			dg5 = (lastProduct / 10000) - dg6*10; 
			dg4 = (lastProduct / 1000) - dg6*100 - dg5*10; 
			dg3 = (lastProduct / 100) - dg6*1000 - dg5*100 - dg4*10;
			dg2 = (lastProduct / 10) - dg6*10000 - dg5*1000 - dg4*100 - dg3*10;
			dg1 = lastProduct - dg6*100000 - dg5*10000 - dg4*1000 - dg3*100 - dg2*10;
			
			printf("%d\n", lastProduct); //// for debug
			
			// Check if the number is a palindrome and check if it's bigger than the last palindrome number
			if(((dg6 == dg1) && (dg5 == dg2) && (dg4 == dg3)) && (lastProduct > bigPlnd)) {
				bigPlnd = lastProduct;
				
				printf("***************************\n"); //// for debug
				printf("%d", bigPlnd); //// for debug
			}
			n1++;
		}
		n1 = 320;
		n2++;
	}
	
	printf("%d", bigPlnd);
	
}

// Answer is 906609
// Process exited after 36.93 seconds 
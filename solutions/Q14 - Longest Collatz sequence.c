/*

Which starting number, under one million, produces the longest chain?

*/

#include <stdio.h> 

int collCount(int S) {
	
	int count = 1;
	
	while(!(S == 1)) {
		if(S%2==0) {
			S = S/2;
		} else {
			S = (3*S)+1;
		}
		count++;
	}
	
	return count;
}

int main() {
	
	long long int countUpdater = 0, nUpdater = 0, collCt;
	
	for(int i = 2; i < 1000000; i++) {
		collCt = collCount(i);
		printf("%d\n\n", collCt);
		if(collCt > countUpdater) {
			countUpdater = collCt;
			nUpdater = i;
		}
	}
	
	printf("    %lli %lli", countUpdater, nUpdater);

}
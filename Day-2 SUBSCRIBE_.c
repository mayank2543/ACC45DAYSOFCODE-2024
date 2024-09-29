#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	while (T--){
	int N, X;
	scanf("%d %d", &N, &X);
	
	int subscription = (N + 5) / 6;
	int totalcost = subscription * X;
	printf("%d \n", totalcost);
	}
	
	return 0;

}


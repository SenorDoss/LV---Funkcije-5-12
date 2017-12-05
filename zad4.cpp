#include <stdio.h>

void prir(int a) {
	int i;
	for (i = 0; i < a/2; i++) {
		if(a%2!=1) { printf("Broj %d. nije prosti.", a); break }
	}
}

main() {
	int a;
	printf("Upisi broj: "); scanf("%d", &a);
	prir(a);
}
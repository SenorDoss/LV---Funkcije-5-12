#include <stdio.h>

float srv(int a, int b) {
	float fa = 0, fb = 0;
	int i;
	for(i = a + 1; i < b; i++) {
		fa += i;
		fb++;
	} 
	return fa/fb;
}

main() {
	int a[2], i;
	for (i = 0; i < 2; i++) {
		printf("Upisi %d. broj: ", i + 1); scanf("%d", &a[i]);
	}
	printf("Srednja vrijednost brojeva od %d do %d glasi: %.2f", a[0], a[1], srv(a[0],a[1]));
}
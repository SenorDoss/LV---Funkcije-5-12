#include <stdio.h> 
#include <math.h>

int pot(int a, int b) {
	return (int)pow((double)a, b);
}

main() {
	int a[2], i;
	for (i = 0; i < 2; i++) {
		printf("Upisi %d. broj: ", i + 1); scanf("%d", &a[i]);
	}
	printf("Broj %d na potenciju %d glasi: %d", a[0], a[1], pot(a[0],a[1]));
}
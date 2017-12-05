#include <stdio.h> 

void print(int a, int b, int c) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	printf("Od Upisanih, najveci broj je: %d\n\n", max);
}

main() {
	int a[3], i;
	for (i = 0; i < 3; i++) {
		printf("Upisi %d. broj: ", i + 1); scanf("%d", &a[i]);
	}
	print(a[0], a[1], a[2]);
}
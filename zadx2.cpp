#include <stdio.h>

void perf(int a) {
	int i, j, zbrj = 0, perf = 0;
	for (i = 1; i <= a; i++) {
		zbrj = 0;
		for (j = 1; j < i; j++) {
			if (i%j == 0) zbrj+=j;
		}
	if (zbrj == i) perf++;
	}
	printf("Broj savrsenih brojeva od 1 do %d glasi: %d\n\n", a, perf);
}

main() {
	int n;
	printf("Upisi broj: "); scanf("%d", &n);
	perf(n);
}
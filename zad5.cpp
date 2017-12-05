#include <stdio.h> 

void math(int x, int y) {
	float fak1, fak2, fak3;
	fak1 = x/y;
	fak2 = (y+x)/x;
	fak3 = 2*(y+x);
	printf("Rezultat matematicke funkcije za brojeve %d i %d je %.2f", x, y, (fak1+fak2)*fak3);
}

main() {
	int i, a[2];
	for(i = 0; i < 2; i++) {
		printf("Upisi %d. broj: ",i + 1); scanf("%d", &a[i]);
	}
	math(a[0], a[1]);
}
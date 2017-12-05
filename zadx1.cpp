#include <stdio.h>

void znmk(int a) {
	int zbr = 0;
	if (a > 9 && a < 100) zbr = (a%10) + (a/10);
	if (a > 99 && a < 1000) zbr = (a%10) + ((a%100)/10) + (a/100);
	if (a > 999 && a < 10000) zbr = (a%10) + ((a%100)/10) + ((a%1000)/100) + (a/1000);
	if (a > 9999 && a < 100000) zbr = (a%10)+ ((a%100)/10) + ((a%1000)/100) + ((a%10000)/1000) + (a/10000);
	if (a > 99999 && a < 1000000) zbr = (a%10)+ ((a%100)/10) + ((a%1000)/100) + ((a%10000)/1000) + ((a%100000)/10000) + (a/100000);
	printf("Zbroj znamenaka upisanog broja %d, glasi: %d\n\n", a, zbr);
}

main() {
	int a;
	printf("Upisi broj: "); scanf("%d", &a);
	if (a > 9)
		znmk(a);
	else
		printf("Zbroj znamenaka upisanog broja %d, glasi: %d\n\n", a, a);
}
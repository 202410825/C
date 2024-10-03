#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//1
	/*
	
	int a, b,total;
	total = 0;
	scanf("%d %d", &a, &b);
	for (a; a <= b; a++) {
		total += a;
	}
	printf("total = %d", total);


	int n,total;
	total = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		total *= i;
	}
	printf("%d", total);
	*/
	int n;
	int l,q;
	scanf("%d", &n);
	l = (2 * n - 1) / 2;
	
	for (int i = 1; i <= n; i++) {
		int q = i * 2 -1;
		for (int b = l; b>= i;b--) {
			printf(" ");
		}
		for (int a = 0; a < q; a++) {
			printf("*");
		}

		printf("\n");

	}

	return 0;
}
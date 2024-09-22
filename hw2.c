#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float n,m;
	printf("Please enter kilometers: ");
	scanf("%f", &n);
	m = n / 1.609;
	printf("%.1f km is equal to %.1f miles.",n,m);

	return 0;
}

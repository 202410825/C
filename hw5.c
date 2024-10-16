#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int devide[5000];
int de(int num,int i)
{
	if (num == 0) {
		return devide[4999];
	}
	devide[i] = num % 2;

	return de(num / 2, i + 1);
}

int main(void)
{
	int numa,i = 0;
	printf("Please enter a number: ");
	scanf("%d", &numa);
	de(numa, 0);
	int  a = 0; 
	a = numa / 4;
	for (a; a > 0; a--) {
		printf("%d", devide[a-1]);
	}

	return 0;
}
/*

int max(int a, int b, int c)
{
	if (a > b && a > c) {
		printf("%d", a);
	}
	else if (b > a && b > c) {
		printf("%d", b);
	}
	else
		printf("%d", c);
}
int minnum(int a, int b, int c)
{
	if (a < b) {
		return (a < c) ? a : c;
	}
}
int main(void)
{
	int a, b, c;
	printf("¼ýÀÚ: ");
	scanf("%d %d %d", &a, &b, &c);
	max(a, b, c);

	return 0;
}

*/
/*
20/2 = 0
10/2 = 0
5/2=1
2/2=0
1/2=1
*/
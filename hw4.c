#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
/*
8-1,1
int main(void)
{
	for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 9 == 0) {
			printf("%d", i);
		}
		else
			continue;
		printf("\n");
	}

	return 0;
}

8-1.2
int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	if (num1 > num2) {
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else {
		printf("%d - %d = %d", num2, num1, num2 - num1);
	}

	return 0;
}
8.1.3
int main(void)
{
	int a, b, c;
	printf("국어 영어 수학:");
	scanf("%d %d %d", &a, &b, &c);
	double avg = (a + b + c) / 3;
	if (avg > 90)
		printf("A");
	else if (avg > 80)
		printf("B");
	else if (avg > 70)
		printf("C");
	else if (avg > 50)
		printf("D");
	else
		printf("F");

}
8-1.4
int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	printf("%d", (num1 > num2) ? num1 - num2 : num2 - num1);

	return 0;
}
8-2.1
int main(void)
{
	for (int i = 2; i < 10; i += 2) {
		for (int a = 1; a < 10; a++) {
			printf("%d X %d = %d\n", i, a, a * i);
		}
		printf("\n");
	}
}
*/
int main(void)
{
	int a;
	scanf("%d", &a);

	if (a == 2 || a == 3 || a == 5 || a == 7) {
		printf("It is a prime number.");
	}
	else if (a % 2 == 0 || a % 3 == 0 || a % 5== 0 || a % 7 == 0) {
		printf("It is not a prime number");
	}
	else
		printf("It is a prime number");

}
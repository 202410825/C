#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int a, b;
	printf("Input two inegers: ");
	scanf("%d %d", &a, &b);

	printf("%d & %d = %d\n",a,b,a &b );
	printf("%d | %d = %d\n", a, b, a | b);
	printf("%d ^ %d = %d\n", a, b, a ^ b);


	return 0;
}
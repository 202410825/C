#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5];
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	int odd[5], even[5];
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			even[i] = arr[i];
		}
		else {
			odd[i] = arr[i];
		}
	}
	printf("Odd numbers:");
	for (int i = 0; i < 5; i++) {
		printf("%d ", odd[i]);
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", even[i]);
	}
	return 0;
}


/*11-1
	char arr[] = { 'G','o','o','d',' ','t','i','m','e'};
	for (int i = 0; i < sizeof(arr)/sizeof(char); i++) {
		printf("%c", arr[i]);
	}
*/
/*11-2 +++

*/
/*11-2-2
	char voca[100];
	char reverse_voca[100];
	int len = 0;
	printf("영단어를 입력하세요: ");
	scanf("%s", voca);
	while (voca[len] != '\0')
		len++;
	for (int i = 0; i <len; i++) {
		reverse_voca[i] = voca[len-1-i];
	}
	reverse_voca[len] = '\0';
	printf("단어: %s", reverse_voca);
	return 0;
*/
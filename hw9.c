#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}
int main(void)
{
	char str[100];
	char Ch[100];
	int i;
	printf("���� �Է�: ");
	fgets(str, sizeof(str),stdin);
	for (i = 0;str[i] != '\0' && i < sizeof(str); i++) {
		Ch[i] = convCase(str[i]);
		if (Ch == -1) {
			puts("������ ��� �Է��Դϴ�.");
			return -1;
		}
	}
	Ch[i] = '\0';


	printf("%s", Ch);

	return 0;
}
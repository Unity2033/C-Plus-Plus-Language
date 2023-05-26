#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char a[10] = { "ABCD" };
	char b[10] = { "EFGH" };

	// 두 개의 문자열이 서로 같으면 0을 반환합니다.
	// 첫 번째 매개변수 문자열의 값이 크다면 1을 반환합니다.
	// 두 번째 매개변수 문자열의 값이 크다면 -1을 반환합니다. 
	int value = strcmp(a, b);

	printf("value의 값 : %d", value);




	return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int StringLength(const char * string)
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		count++;
	}

	return count++;
}

int main()
{
    // 문자열 길이 함수 (strlen)
	int value = StringLength("IPhone");

	char string[10];
	scanf_s("%s", string, 10);

	printf("%s\n", string);
	


	int v = strlen("da d");
	printf("value의 값 : %d\n", v);

	// 문자열 복사 함수 (strcpy)

	// 문자열 연결 함수 (strcat)
	char content1[20] = { "Hello" };
	char content2[10] = { "Update" };

	strcat(content1, content2);

	// printf("%s", content1);
	

	
	return 0;
}

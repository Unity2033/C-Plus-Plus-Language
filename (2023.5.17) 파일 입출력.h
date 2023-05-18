#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
#pragma region 파일 입출력


	// 파일 쓰기
	// fopen("파일의 이름.확장자", 파일 모드)
	// w : 쓰기
	// r : 읽기

	// 텍스트 파일을 (w)쓰기로 모드로 열어줍니다.
	// FILE* filePtr = fopen("DB. txt", "w");
	// 
	// fputs("ID\n", filePtr);
	// fputs("Password\n", filePtr);
	// 
	// // 파일 포인터 닫기
	// fclose(filePtr);

	int screen = 1;

	// screen = 1 FULL SCREEN MODE
	// screen = 2 WINDOW MODE
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), screen, 0);

	FILE* readPtr = NULL;

	// 파일 읽기
	while (1)
	{
		readPtr = fopen("Monster.txt", "r");

		char buffer[10000] = { 0, };

		fread(buffer, 1, 10000, readPtr); // 파일 전체 읽기
		printf("%s", buffer);

		system("cls");

		if (GetAsyncKeyState(VK_SPACE))
		{
			exit(0);
		}
	}

	fclose(readPtr);

#pragma endregion




	return 0;
}

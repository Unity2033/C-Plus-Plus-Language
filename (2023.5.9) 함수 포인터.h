#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <string.h>

void Function()
{
	printf("Function() 함수\n");
}

void DataList()
{
	printf("DataList() 함수\n");
}

int Damage(int x)
{
	return x;
}

void Sort(void (*fPrt)()) // 오름차순, 내림차순
{
	fPrt();
}

#pragma region typedef

typedef unsigned int UINT;

typedef struct Player
{
	int x;
	int y;
	char name[10];
}Player1;

#pragma endregion

int main()
{
#pragma region 함수 포인터
	// 함수의 주솟값을 저장하고 가리킬 수 있는
	// 변수입니다.

	// 함수의 이름은 함수의 주소를 의미합니다.
	// printf("Function()의 주솟값 : %p\n", Function);

	// 함수 포인터 선언
	// void (*fPtr) ();
	// int (*intfPtr) (int);
	// 
	// fPtr = Function;
	// intfPtr = Damage;
	// 
	// fPtr();
	// printf("intfPtr의 값 : %d\n", intfPtr(10));
	// 
	// fPtr = DataList;
	// 
	// fPtr();
	// 
	// Sort(Function);

	// 함수 포인터는 함수의 반환형과 매개변수의 타입이
	// 일치해야 하므로, 함수 포인터를 사용하여 동적으로
	// 메모리를 할당할 수 없습니다.

	// fPtr = Damage; 
	// printf("fPtr의 값 : %d", fPtr(10)); Error

#pragma endregion

#pragma region typedef
	// UINT count = 100;
	// unsigned int value = 9999;
	// 
	// printf("count의 값 : %d\n", count);
	// 
	// Player1 player1;
	// player1.x = 10;
	// player1.y = 5;
	// 
	// 
	// // 배열의 주소 <-
	// // [A][l][i][s][t][a][t][][] <- [A][l][i]......
	// // 첫 번째 매개변수 : 복사받을 문자 배열
	// // 두 번째 매개변수 : 복사하는 문자 배열
	// strcpy(player1.name, "Alistar");
	// 
	// printf("player1.x의 값 : %d\n", player1.x);
	// printf("player1.name : %s\n", player1.name);
	// printf("Player1의 메모리 크기 : %u\n", sizeof(player1));
#pragma endregion

	return 0;
}

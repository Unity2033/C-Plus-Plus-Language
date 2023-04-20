#pragma once
#include <stdio.h> 

void main()
{
#pragma region 상수 지시 포인터
	// 포인터 변수를 상수로 선언하여, 포인터 변수가
	// 가리키고 있는 주소에 존재하는 값을 변경할 수
	// 없도록 설정하는 상수화입니다.

	// int data = 100;
	// int data1 = 20;
	// 
	// const int * ptr = &data;
	// 
	// printf("ptr 변수의 값 : %p\n", ptr);
	// // *ptr = 300; (포인터 변수 역참조는 상수화가 되었기 때문에)
	// //                       ERROR를 발생시킵니다.
	// 
	// ptr = &data1;
	// 
	// printf("ptr 변수의 값 : %p\n", ptr);
	// 
#pragma endregion

#pragma region 포인터 상수
	// 상수로 선언한 포인터이므로, 해당 변수의 값을 변경할 수 없지만,
	// 다른 변수의 주소 값을 가리킬 수 있습니다.

	// int value1 = 30;
	// int value2 = 60;
	// 
	// int * const ptr1 = &value1;
	// 
	// printf("value1의 값 : %d\n", value1);
	// 
	// *ptr1 = 99999; // (OK)
	// 
	// printf("value1의 값 : %d\n", value1);
	// 
	// ptr1 = &value2; (Error)

#pragma endregion

#pragma region sizeof(자료형)

	// float health = 66.5f;
	// short * pointer = NULL;	// 포인터 변수 (8 BYTE)
	// 
	// printf("char의 크기 : %d\n", sizeof(char));
	// printf("short의 크기 : %d\n", sizeof(short));
	// printf("int의 크기 : %d\n", sizeof(int));
	// printf("long의 크기 : %d\n", sizeof(long));
	// 
	// printf("float의 크기 : %d\n", sizeof(health));
	// printf("double의 크기 : %d\n", sizeof(double));
	// printf("long double의 크기 : %d\n", sizeof(long double));
	// 
	// printf("Pointer의 크기 : %d\n", sizeof(pointer)); 

#pragma endregion

#pragma region 구구단

	// 2 * 1 = 2 
	// ~
	// 2 * 9 = 18

	// 9 * 9 = 81

	// HINT 
	// 2중 for문

	// for (int i = 1; i <= 9; i++)
	// {
	// 	for (int j = 1; j <= 9; j++)
	// 	{
	// 		printf("%d x %d = %d\n", i, j, i * j);
	// 	}
	// 
	// 	printf("\n");
	// }



#pragma endregion

#pragma region scanf(입력 함수)
	// 표준 입력 함수로, 여러 종류의 데이터를
	// 다양한 서식에 맞추어 입력해주는 함수입니다.

	// scanf <- SDL 검사 해제를 안하고 사용하게 되면
	//          ERROR 발생

	// 	scanf_s("입력할 변수의 서식", &변수)

	// int count = 0;
	// 
	// printf("count 변수의 값을 입력해주세요.");
	// 
	// scanf_s("%d", &count);
	// 
	// // 표준 입력 함수는 입력을 수행할 때까지 다음
	// // 작업으로 넘어갈 수 없습니다.
	// printf("count 변수의 값 : %d", count);

	// 별 찍기
	// 문제) 내가 입력한 값에 따라 별이 찍히도록 구현해주세요.
	// ex) 5 입력
	// ☆
	// ☆☆
	// ☆☆☆
	// ☆☆☆☆
	// ☆☆☆☆☆	  

	int count = 0;

	scanf_s("%d", &count);

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("☆");
		}

		printf("\n");
	}
#pragma endregion

}

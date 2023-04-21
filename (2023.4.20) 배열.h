#pragma once
#include <stdio.h> 

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진
	// 유한 집합입니다.

	//  0  1  2  3  4
	// [ ][ ][ ][ ][ ]
	// int array[5];
	// 
	// // 배열의 경우 첫 번째 원소(index)는 0부터 시작합니다.
	// array[0] = 100;
	// array[1] = 200;
	// array[2] = 300;
	// array[3] = 400;
	// array[4] = 500;
	// 
	// // 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을
	// // 가지게 됩니다.
	// // array[5] = 600; (X)
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("array[%d]의 값 : %d\n", i, array[i]);
	// }
	// 
	// // [15.5f] [30.25f] [57.15f]
	// 				    // [0]    [1]     [2]
	// float itemList[3] = {15.5f, 30.25f, 57.15f};
	// 
	// // 배열의 메모리 공간은 프로그램이 실행되는 동안 변경할 수 없습니다.
	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("array[%d]의 값 : %f\n", i, itemList[i]);
	// }
	// 
	// // 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// // 설정한 요소에 따라 배열의 크기가 결정됩니다.
	// char string [ ] = { 'A','B','C' };
	// 
	// // 배열의 이름은 배열의 시작 주소를 가리킵니다.
	// printf("string 배열의 주소 : %p\n", string);
	// printf("string 배열 [0]의 주소 : %p\n", &string[0]);

	// 배열과 포인터의 관계
	// int data = 100;
	// 
	// int * ptr = &data;
	// 
	// printf("ptr 변수의 값 : %p\n", ptr);
	// printf("ptr + 1 : %p\n", ptr + 1);
	// 
	// // 10 진수
	// 
	// // 2 진수
	// 
	// // 16 진수
	// // 1 ~ 9 
	// // 10 : A
	// // 11 : B
	// // 12 : C
	// // 13 : D
	// // 14 : E
	// // 15 : F
#pragma endregion

#pragma region 시프트 연산자
	// 비트 값을 주어진 숫자만큼 부호 방향으로 
	// 이동시키는 연산자입니다.

	// char value = 10; // 0000 1010
	// 
	// // >> : 비트값을 주어진 숫자만큼 오른쪽으로 이동시킵니다.
	// printf("value 변수를 오른쪽으로 2번 비트 연산한 결과 : %d\n", value >> 2);
	// printf("value 변수의 값 : %d\n", value);
	// 
	// // 0000 1010
	// // 0000 0101 -> 오른쪽으로 1번 비트 연산할 결과
	// // 0000 0010 
	// 	  
	// // << : 비트값을 주어진 숫자만큼 왼쪽으로 이동시킵니다.
	// printf("value 변수를 왼쪽으로 3번 비트 연산한 결과 : %d\n", value << 3);
	// 
	// 0000 1010
	// 0001 0100 -> 왼쪽으로 1번
	// 0010 1000 -> 왼쪽으로 2번
	// 0101 0000 -> 왼쪽으로 3번	64 + 16 

#pragma endregion

#pragma region 홀수와 짝수
	// 문제) 17 <- 입력
	// 홀수 출력

	// int count = 0;
	// 
	// scanf_s("%d", &count);
	// 
	// if (count % 2 == 0)
	// {
	// 	printf("짝수");
	// }
	// else
	// {
	// 	printf("홀수");
	// }

#pragma endregion

#pragma region 네이밍 컨벤션

	 // camel case (카멜 표기법)
	 // 첫 단어를 제외하고 첫 글자를 대문자로 
	 // 표기하는 표기법입니다.

	 // ex) int playerHealth;

	 // pascal case (파스칼 표기법)
	 // 단어의 첫 글자를 대문자로 표기하는 표기법입니다.

	 // ex) void SelectTarget() { }

	 // snake case (스네이크 표기법)
	 // 전부 소문자로 작성하고 단어 사이에 (_)를 표기하는 표기법입니다.
	 // ex) api_url   
#pragma endregion

}

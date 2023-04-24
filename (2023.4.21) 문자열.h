#pragma once
#include <stdio.h> 
#include <limits.h>
// #include 파일 처리 전처리문
// 시스템 파일이나 사용자 정의 파일을 프로그램 소스에
// 삽입하여 사용하기 위한 선언문입니다.

// 전처리기란?
// 프로그램이 컴파일되기 이전에 프로그램에 대한
// 사전 처리하는 과정입니다.

#pragma region 매크로
   // 프로그램 내에서 특정한 데이터가 문자열로
   // 정의되고 처리되는 과정입니다.

   // 매크로는 컴파일러가 아닌 선행처리기에 의해서
   // 처리되는 문장이기 때문에 명령문 끝에 ";"을
   // 사용하지 않습니다.
#define SIZE 20 

   // 매크로는 메모리 공간을 가지고 있지 않습니다.

#pragma endregion


void main()
{
#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 
	// 문자 변수의 집합입니다.

	// 문자열의 경우 포인터를 이용하여 문자열 상수
	// 가리키도록 설정할 수 있습니다.
	// const char * name = "James";
	// 
	// // %s : 문자열을 출력하는 서식
	// printf("name 변수의 값 : %p\n", name);
	// printf("name 변수가 가리키는 값 : %s\n", name);
	// 
	// // 문자열 상수는 데이터 영역의 읽기 전용 공간에
	// // 저장되기 때문에 문자열의 값을 변경할 수 없습니다.
	// // *name = 'G';
	// 
	// name = "Tom";
	// 
	// // 문자열은 맨 마지막에 무효의 문자(NULL)가 자동으로
	// // 포합됩니다.
	// 
	// // NULL 문자의 역할은 문자열의 끝을 알려주는 것입니다.
	// printf("name 변수의 값 : %p\n", name);
	// printf("name 변수가 가리키는 값 : %s\n", name);

	// 배열을 이용한 문자열
	// char string [ ] = "Game";
	// 
	// // 문자열은 공백도 함께 메모리 공간에 포함됩니다.
	// char string1 [ ] = { "App l\0e" };
	// 
	// // 문자 배열 사이에 무효의 문자를 넣게 되면
	// // 무효의 문자까지만 문자열을 출력합니다.
	// printf("string의 값 : %s\n", string);
	// printf("string1의 값 : %s\n", string1);
	// 
	// string[1] = 'b';
	// string[3] = 'o';
	// 
	// printf("string의 값 : %s\n", string);

	// char 배열은 포인터 상수입니다.
	// string = "Content";
	// string = string1;

#pragma endregion

	// 매크로
	// printf("매크로 SIZE의 값 : %d", SIZE);

#pragma region 최댓값과 최솟값
	// 배열[5] = { 10, 5, 6, 99, 1};

#define ARRAYSIZE 5

	int max = INT_MIN;
	int min = INT_MAX;

	int array[ARRAYSIZE] = { 10,5,6,99,1 };

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		// 최댓값
		if (max < array[i])
		{
			max = array[i];
		}

		// 최솟값
		if (min > array[i])
		{
			min = array[i];
		}
	}

	printf("array의 최댓값 : %d, array의 최솟값 : %d", max, min);

	// 최댓값 : 99

	// 최솟값 : 1

#pragma endregion


}

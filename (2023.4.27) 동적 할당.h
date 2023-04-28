#pragma once
#include <stdio.h> 
#include <malloc.h>

void main()
{
#pragma region 동적 할당
	// 프로그램을 싱해 중에 필요한 만큼
	// 메모리를 할당하는 작업입니다.

	// 동적 할당은 실행 시간에 가변적으로 메모리의
	// 크기를 변경시킬 수 있으며, 동적으로 메모리의
	// 크기를 할당할 때 바이트 단위로 지정합니다.

	// int * ptr = (int *)malloc(sizeof(int));

	// // 메모리 동적 할당할 때 주소를 범용 포인터로 반환하기
	// // 때문에 자료형을 변환한 다음 메모리에 할당해야 합니다.
	// *ptr = 1000;
	// 
	// printf("동적 할당한 메모리 안에 있는 값 : %d\n", *ptr);

	// // 메모리 해제 
	// free(ptr);

	// 이미 해제된 메모리를 해제하면 Error가 발생합니다.
	// free(ptr);

#pragma endregion

#pragma region ASCII 코드
	// 영문 알파벳을 사용하는 대표적인 문자 인코딩입니다.

	// char alphabet = 65;
	// 
	// printf("ASCII 코드 정수 값 : %d\n", alphabet);
	// printf("ASCII 코드 문자 값 : %c\n", alphabet);
	// 
	// // 문제) 알파벳 (소문자) a ~ z 까지 출력해주세요. 
	// for (int i = 0; i <= 25; i++)
	// {
	// 	printf("%c ", 97 + i);
	// }
#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	// int * intPtr = malloc(sizeof(int));
	// 
	// *intPtr = 300;
	// 
	// printf("intPtr이 가리키는 값 : %d\n", *intPtr);
	// 
	// free(intPtr);
	// 
	// printf("해제된 intPtr이 가리키는 값 : %d\n", *intPtr);
	// 
	// intPtr = NULL;
	// 
	// *intPtr = 100;
#pragma endregion

#pragma region 이중 포인터

	// int a = 100;
	// int * aptr = &a;
	// int ** daptr = &aptr;

	// int b = 200;
	// int * bptr = &b;
	// int** dbPtr = &bptr;

	// int temp = 0;

	// // 200 <- 200
	//   temp = **dbPtr;

	// // 100 <- 100
	// **dbPtr = **daptr;

	// // 200 <-  200
	// **daptr = temp;

	// printf("a의 값 : %d, b의 값 : %d\n", a, b);
	// printf("daptr의 값 : %d, dbPtr의 값 : %d\n", **daptr, **dbPtr);

	// printf("*dptr의 값 : %p\n", *daptr);
	// printf("**dptr의 값 : %d\n", **daptr);

#pragma endregion

}

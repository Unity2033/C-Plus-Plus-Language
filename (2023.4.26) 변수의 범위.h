#pragma once
#include <stdio.h> 


#pragma region 전역 변수
// 함수 외부에서 선언된 변수로 프로그램 어디에서나 접근 가능하며,
// 프로그램이 종료되어야만 메모리에서 해제되는 변수입니다.

int globalValue = 5;

#pragma endregion

#pragma region 정적 변수
// 지역 변수와 전역 변수의 특징을 가지고 있으며, 
// 한 번만 초기화가 이루어집니다.

static int attack;

void Calculator()
{
	static int value = 1;

	value += 1;

	printf("정적 변수 value의 값 : %d\n", value);
}


#pragma endregion

void Function()
{
	int count = 0;

	count += 1;
	globalValue += 1;

	printf("count의 값 : %d\n", count);
	printf("globalValue의 값 : %d\n", globalValue);
}

void main()
{
#pragma region 지역 변수
	// '블록'{ } 내에서 선언된 변수로
	// 블록 내에서만 유효하며, 블록이 종료되면
	// 메모리에서 사라지는 변수입니다.

	// A 지역
	// int data = 100;
	// 
	// { // B 지역
	// 	int data = 20;
	// 	printf("B 지역 data의 값 : %d\n", data);
	// }
	// 
	// printf("A 지역 data의 값 : %d\n", data);
#pragma endregion

	// Function();
	// Function();
	// 
	// Calculator();
	// Calculator();
	// 
	// printf("정적 변수 attack의 값 : %d", attack);

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 
	// 저장할 수 있는 포인터입니다.

	// char charData = 'X';
	// int intData = 10;
	// 
	// void * ptr = NULL;
	// 
	// // 범용 포인터는 메모리 주소에 접근해서 값을
	// // 변경할 수 없습니다.
	// ptr = &charData;
	// 
	// // 범용 포인터로 변수의 메모리에 접근하려면 범용
	// // 포인터가 가리키는 변수의 자료형으로 형 변환
	// // 해주어야 합니다.
	// *(char *)ptr = 'M';
	// printf("ptr이 가리키는 값 : %c\n", *(char*)ptr);
	// 
	// ptr = &intData;
	// 
	// *(int*)ptr = 99;
	// printf("ptr이 가리키는 값 : %d\n", *(int*)ptr);
#pragma endregion

#pragma region 약수
	// 문제) 내가 입력한 숫자의 약수를 출력하세요.
	// 12 -> 1, 2, 3, 4, 6, 12

	// int number = 0;
	// 
	// scanf_s("%d", &number);
	// 
	// for (int i = 1; i <= number; i++)
	// {
	// 	if (number % i == 0)
	// 	{					
	// 		// 1, 2, 3, 4, 6, 12
	// 		printf("%d ", i);
	// 	}
	// }
#pragma endregion

#pragma region ShortCircuit
	// 논리 연산에서 두 피연산자 중 어느 한쪽만 '참'
	// 이면 우측의 피연산자의 값은 평가하지 않고 바로 결과를
	// 얻는 행위입니다.

	// &&, || (논리 연산자)
	// &, |	  (비트 연산자)

	int x = 0;
	int y = 1;

	if (x == -1 && ++y == 2) {}

	printf("x의 값 : %d, y의 값 : %d\n", x, y);
#pragma endregion


}

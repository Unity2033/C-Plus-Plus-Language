#include <stdio.h> 


#pragma region 함수
// 하나의 특별한 목적의 작업을 수행하기 위해
// 독립적으로 설계된 코드의 집합입니다.

// void : 값을 반환하지 않는 자료형
void Attack()
{
	for (int i = 0; i < 5; i++)
	{
		printf("공격\n");
	}
}

// 반환형 : 함수가 종료되었을 때 값을 반환해주는 형태입니다.
int Function()
{
	return 100;
}

// 함수의 경우 자료형과 반환하는 값을 형태가 일치하지
// 않으면 원하는 값을 얻을 수 없습니다.
int ProcessInt()
{
	return 67.5f;
}

// 함수도 같은 이름의 함수를 중복으로 선언할 수 없습니다.

#pragma endregion

#pragma region 매개 변수
// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기
// 위해 사용하는 변수입니다.
void Calculator(int x)
{
	printf("매개 변수 x의 값 : %d\n", x);
}

int Add(int x, int y)
{
	return x + y;
}

#pragma endregion

// 값에 의한 전달 (함수) 
void Swap(int x, int y)
{
	int temp = 0;

	printf("Swap 전 -> x의 값 : %d, y의 값 : %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("Swap 후 -> x의 값 : % d, y의 값 : % d\n", x, y);
}

// 참조에 의한 전달 (함수)
void SwapReference(int * x, int * y)
{
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;
}

void main()	
{    
#pragma region 함수의 호출(매개변수 (X))
	// Attack();
	// Attack();

	// printf("Function()의 값 : %d\n", Function());
	// printf("ProcessInt()의 값 : %d\n", ProcessInt());
#pragma endregion

#pragma region 함수의 호출(매개변수 (O))

	// 인수란?
	// 함수가 호출될 때 매개변수에 실제로 전돨되는 값입니다.
	// Calculator(100);

	// 인수는 왼쪽에서부터 매개변수에 전달됩니다.
	// printf("Add() 함수의 값 : %d", Add(10, 20));
#pragma endregion

#pragma region 값에 의한 전달 & 참조에 의한 전달

	int a = 100;
	int b = 200;

	// call by value
	Swap(a, b);
	printf("a 변수의 값 : %d, b 변수의 값 : %d\n", a, b);

	// call by reference
	// 함수를 호출할 때 변수의 주소를 인수로 전달하게 되면 
	// 전달한 변수의 주소가 참조되어 인수로 전달한 값이 함수 내에서 일어난
	// 연산에 대해 영향을 받습니다.
	SwapReference(&a, &b);
	printf("a 변수의 값 : %d, b 변수의 값 : %d\n", a, b);

#pragma endregion
}

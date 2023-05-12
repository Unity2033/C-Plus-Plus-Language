#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdarg.h>

void Array(int array[], int size)
{
	// call by reference
	for (int i = 0; i < size; i++)
	{
		array[i] = 100 * i;

		// array[0](0)
		// array[1](100)
	}
}

void ChangeString(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i] - 32);
	}
}

void Information(int size, ...)
{
	// va_list 
	// 각 가변 인자의 시작 주소를 가리키는 포인터입니다.
	va_list	argPtr;


	// va_start
	// va_list로 만들어진 포인터에게 가변인자	중 첫 번째
	// 인자의 주소를 가르쳐주는 매크로입니다.
	va_start(argPtr, size);

	int result = 0;

	for (int i = 0; i < size; i++)
	{
		// va_arg 
		// 특정 가변인자를 가리키고 있는 va_list의 포인터를
		// 다음 가변인자로 이동시켜 주는 매크로입니다.
		result += va_arg(argPtr, int);
	}

	printf("result 변수의 값 : %d\n", result);

	// va_end
	// 사용한 가변인자 변수를 끝낼 때 NULL로 돌려주는
	// 매크로입니다.
	va_end(argPtr);
}

int main()
{
#pragma region 매개변수 배열

	// int dataList [5] = { 1,2,3,4,5 };
	// 
	// Array(dataList, 5);
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	  printf("%d ", dataList[i]);
	// }

	// char ptr[10] = {0,};
	// 
	// scanf("%s", ptr);
	// 
	// ChangeString(ptr);

#pragma endregion

#pragma region 가변 인수
	  // 매개변수로 들어오는 값의 갯수와 상관없이
	  // 동적으로 인수를 받을 수 있는 인수입니다.

	Information(2, 10, 20);
	Information(5, 1, 2, 3, 4, 5);


#pragma endregion

	return 0;
}

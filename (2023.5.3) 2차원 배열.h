#pragma once
#include <stdio.h> 

// enum 선언
enum Color
{
	// 열거형은 초깃값을 설정할 수 있으며, 그다음 상수값은
	// 1씩 증가합니다.
	BLACK,
	RED = 13,
	BLUE,
};

enum State
{
	IDLE,
	ATTACK,
	DIE
};

int main()
{
#pragma region (2)차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	// 2차원 배열은 행과 열로 구분되며 앞에 있는
	// 배열은 행을 의미하고, 뒤에 있는 배열은 열을 의미합니다.
	// int array2D[4][3] = 	
	// {
	//    {10, 20, 30},
	//    {40, 50, 60},
	//    {70, 80, 90},
	//    {100, 110, 120}
	// };
	// 
	// printf("array2D의 주소 : %p\n", array2D);
	// printf("array2D[0][0]의 주소 : %p\n", &array2D[0][0]);
	// 
	// int * ptr = NULL;
	// 
	// // 배열 포인터
	// // 특정 사이즈의 배열'만' 가리킬 수 있는 하나의 포인터입니다.
	// int (* arrayPtr)[3];
	// 
	// arrayPtr = array2D;
	// arrayPtr = arrayPtr + 2;
	// 
	// printf("arrayPtr이 가리키는 값 : %d", (*arrayPtr)[0]);
#pragma endregion

#pragma region 열거형(enum)
	// 요소, 멤버라 불리는 명명된 값의 집합을
	// 이루는 자료형입니다.

	// enum Color color;
	// 
	// color = BLACK;
	// printf("color의 값 : %d\n", color);
	// 
	// color = RED;
	// printf("color의 값 : %d\n", color);

	// enum State state;
	// 
	// int select = 0;
	// 
	// printf("플레이어의 상태를 설정해주세요. : ");
	// scanf_s("%d", &select);
	// 
	// state = select;
	// 
	// switch (state)
	// {
	// 	case IDLE : printf("대기 상태");
	// 		break;	
	// 	case ATTACK : printf("공격 상태");
	// 		break;
	// 	case DIE : printf("죽음 상태");
	// 		break;
	// }

#pragma endregion

	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()	
{    
#pragma region _kbhit() 함수
	// char key = 0;
	// 
	// while (1)
	// {
	//		if (_kbhit()) // 키보드 입력을 확인하는 함수
	//		{
	// 			key = _getch();	// 방향키 입력 시 224 00이 들어오게 되므로 앞에 있는 값 224를 삭제합니다.
	//		
	// 			if (key == -32)
	// 			{
	// 				key = _getch();
	// 			}
	// 
	// 		switch (key)
	// 		{
	// 		case UP: printf("↑\n");
	// 			break;
	// 		case LEFT: printf("←\n");
	// 			break;
	// 		case RIGHT: printf("→\n");
	// 			break;
	// 		case DOWN: printf("↓\n");
	// 			break;
	// 		default: printf("다시 입력해주세요.\n");
	// 			break;
	// 		}
	// 
	// 	}
	// 		printf("다른 작업 중...\n");
	// 	
	// }
	// 
#pragma endregion


#pragma region GetAsyncKeyState() 함수

	// while (1)
	// {
	//		if (GetAsyncKeyState(VK_UP))
	//		{
	//			// 1000 (1 초)
	//			Sleep(100);
	//			printf("↑\n");
	//		}
	//		if (GetAsyncKeyState(VK_LEFT))
	//		{
	//			Sleep(100);
	//			printf("←\n");
	//		}	
	//		if (GetAsyncKeyState(VK_RIGHT))
	//		{
	//			Sleep(100);
	//			printf("→\n");
	//		}	
	//		if (GetAsyncKeyState(VK_DOWN))
	//		{
	//			Sleep(100);
	//			printf("↓\n");
	//		}
	// }


#pragma endregion



	return 0;
}

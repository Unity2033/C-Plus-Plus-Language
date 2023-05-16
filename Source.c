#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// 좌표 이동 함수
void GotoXY(int x, int y)
{
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


int main()	
{    
#pragma region 좌표 이동 함수

	//	int x = 0;
	//	int y = 0;
	//	int key = 0;
	//	
	//	while (1)
	//	{
	//		GotoXY(x, y);
	//		printf("★");
	//	
	//		if (_kbhit())
	//		{
	//			key = _getch();	// 방향키 입력 시 224 00이 들어오게 되므로 앞에 있는 값 224를 삭제합니다.
	//					
	//			if (key == -32)
	//			{
	//			 	key = _getch();
	//			}
	//			 
	//			switch (key)
	//			{
	//				case UP : if(y > 0) y--;	
	//					break;
	//				case LEFT : if(x > 0) x--;			
	//				 	break;
	//				case RIGHT: x++;
	//				 	break;
	//				case DOWN: y++;
	//				 	break;
	//			}
	//	
	//			system("cls");
	//		}
	//	}

	





#pragma endregion

#pragma region 문자열 길이 함수(strlen)
     // 문자열의 크기를 반환하는 함수입니다.

	// 가장 마지막에 있는 NULL 문자를 포함하지 않고
	// 문자열의 크기를 계산합니다.
	// const char * string = "Visual";
	// 
	// int size = strlen(string);
	// 
	// printf("size의 값 : %d", size);
#pragma endregion

#pragma region 회문
	//	int flag = 1;
	//	
	//	char * data = "ABCD";
	//	
	//	//                       5 / 2 = 2
	//	for (int i = 0; i < strlen(data) / 2; i++)
	//	{
	//		// [L] [E]     [E] [L]
	//		// [0] [1] [2] [3] [4]
	//		if (data[i] != data[strlen(data) - 1 - i])
	//		{
	//			flag = 0;
	//			break;
	//		}		
	//	}
	//	
	//	if (flag == 1)
	//	{
	//		printf("회문\n");
	//	}
	//	else
	//	{
	//		printf("회문이 아닙니다.\n");
	//	}

#pragma endregion



	return 0;
}

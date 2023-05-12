#include <stdio.h>
#include <stdlib.h>	// rand(), srand()
#include <time.h>

int main()	
{    
#pragma region rand() 함수
    // 0 ~ 32767 사이의 난수 값을 생성하는
	// 함수입니다.
	 
	// time : 1970년 1월 1일 0시 (UTC)부터 현재까지
	// 흐른 시간을 반환합니다.

	// 시간 단위 : (초)
	// srand(time(NULL));
	// 
	// // 5개 출력해주세요.
	// 
	// int value = 0;
	// 
	// // 랜덤한 값이 한 자릿수만 나올 수 있도록 만들어 주세요.
	// for (int i = 0; i < 5; i++)
	// {
	// 	value = rand() % 10 + 1;
	// 	printf("value의 값 : %d\n", value);
	// }
	// 
#pragma endregion

#pragma region UP-DOWN 게임

	//	int life = 5;
	//	int answer = 0;
	//	int computer = 0;
	//	
	//	srand(time(NULL));
	//	computer = rand() % 50 + 1;
	//	
	//	while(life) // <- 게임 업데이트 
	//	{
	//		printf("현재 목숨 : %d\n", life);
	//		printf("컴퓨터가 가지고 있는 숫자 : ");
	//	
	//		scanf_s("%d", &answer);
	//	
	//		if (answer == computer)
	//		{
	//			printf("\n게임에서 승리하였습니다.");
	//			break;
	//		}
	//		else if (answer < computer)
	//		{
	//			printf("\n컴퓨터가 가지고 있는 값보다 작습니다.\n");
	//			life--;
	//		}
	//		else if (answer > computer)
	//		{
	//			printf("\n컴퓨터가 가지고 있는 값보다 큽니다.\n");
	//			life--;
	//		}
	//	}
	//	
	//	
	//	if (life == 0)
	//	{
	//		printf("\n게임에서 패배하였습니다.");
	//	}
	 
#pragma endregion

#pragma region 정수의 승격
	// char 자료형과 short 자료형이 연산이 
	// 이루어질 때 CPU가 처리하기에 가장 적합한
	// 크기의 정수 자료형 int로 자동 형변환하는 과정입니다.
	  
	char data1 = 5;
	short data2 = 10;

	printf("data1과 data2를 연산한 크기 : %u", sizeof(data1 + data2));
	  
#pragma endregion



	return 0;
}

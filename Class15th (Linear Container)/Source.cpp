#include <iostream>
#include <vector>	
#include <deque>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이
	// 없는 일반적인 컨테이너입니다.
#pragma region Vector

	// std::vector<int> vector;
	// 
	// vector.reserve(10);
	// 
	// // push_back : Vector 컨테이너 뒤에 데이터 값을 넣어줍니다.
	// // [10] [20] [30] [40] [50] [60]
	// vector.push_back(10);
	// 
	// cout << "vector.capacity : " << vector.capacity() << endl;
	// 
	// vector.push_back(20);
	// 
	// vector.push_back(30);
	// 
	// vector.push_back(40);
	// 
	// vector.push_back(50);
	// 
	// cout << "vector.capacity : " << vector.capacity() << endl;
	// 
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << " ";
	// }

	// vector.pop_back();
	// vector.pop_back();
	// vector.pop_back();
	// 
	// cout << endl;
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << " ";
	// }	  
	// 
	// cout << endl;
	// 
	// cout << "vector.size : " << vector.size() << endl;
	// cout << "vector.capacity : " << vector.capacity() << endl;

#pragma endregion

#pragma region Rhythm Game

	//	srand(time(NULL));
	//	
	//	std::vector<const char*> note;
	//	
	//	int createCount = 5;
	//	
	//	// 1. Note를 생성합니다.
	//	for (int i = 0; i < createCount; i++)
	//	{
	//		// 2. 랜덤한 Note를 생성합니다.
	//		// ← ↑ ↓ →
	//		int random = rand() % 4;
	//	
	//		switch (random)
	//		{
	//			case 0 : note.push_back("↑");
	//				break;
	//			case 1 : note.push_back("←");
	//				break;
	//			case 2 : note.push_back("→");
	//				break;
	//			case 3 : note.push_back("↓");
	//				break;
	//		}
	//	}
	//	
	//	char key = 0;
	//	
	//	// 3. 게임이 시작 조건을 설정합니다.
	//	while (note.empty() == false)
	//	{
	//		// 4. Note를 출력합니다.
	//		for (int i = 0; i < note.size(); i++)
	//		{
	//			cout << note[i] << " ";
	//		}
	//	
	//		// 5. key 입력을 받습니다.
	//		key = _getch();
	//	
	//		if (key == -32)
	//		{
	//			key = _getch();
	//		}
	//	
	//		// 6. 내가 선택한 key가 맞다면 Note를 삭제합니다.
	//		switch (key)
	//		{
	//			case UP    : if (note[note.size() - 1] == "↑") { note.pop_back(); }
	//				break;
	//			case LEFT  : if (note[note.size() - 1] == "←") { note.pop_back(); }
	//				break;
	//			case RIGHT : if (note[note.size() - 1] == "→") { note.pop_back(); }
	//				break;
	//			case DOWN  : if (note[note.size() - 1] == "↓") { note.pop_back(); }
	//	
	//				break;
	//		}
	//	
	//		// 7. 화면을 전체 지워줍니다.
	//		system("cls");
	//	}


#pragma endregion

#pragma region Deque

	 //	 std::deque<int> deque;
	 //	
	 //	 deque.push_front(10);
	 //	 deque.push_back(5);
	 //	
	 //	 deque.push_front(7);
	 //	 deque.push_back(11);
	 //	
	 //	 for (int i = 0; i < deque.size(); i++)
	 //	 {
	 //		  cout << "deque의 [" << i << "] : " << deque[i] << endl;
	 //	 }
	 //	
	 //	 deque.pop_front();
	 //	 deque.pop_back();
	 //	
	 //	 cout << "-----------------------------------------"<< endl;
	 //	
	 //	 for (int i = 0; i < deque.size(); i++)
	 //	 {
	 //		  cout << "deque의 [" << i << "] : " << deque[i] << endl;
	 //	 }

#pragma endregion

#pragma endregion


	return 0;
}

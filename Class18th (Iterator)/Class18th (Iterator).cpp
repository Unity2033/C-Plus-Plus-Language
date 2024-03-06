#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
#pragma region 반복자

	// std::list<int> list;
	// 
	// list.push_back(10);
	// list.push_back(20);
	// list.push_back(30);
	// list.push_front(60);
	// list.push_front(70);
	// list.push_front(80);
	// 
	// std::list<int>::iterator iterator;
	// 
	// iterator = list.begin();
	// 
	// list.insert(list.begin(), 100);
	// 
	// list.erase(list.begin());
	// 
	// for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++)
	// {
	// 	cout << "list의 값 : " << *iterator << endl;
	// }

#pragma endregion

#pragma region String

	// std::string content;
	// 
	// content = "Hello World~";
	// 
	// cout << content << endl;
	// 
	// content.append(" Continue");
	// 
	// cout << content << endl;

#pragma endregion

#pragma region 최대 공약수

	// int firstValue = 0;
	// int secondValue = 0;
	// 
	// cout << "첫 번째 값 입력 : ";
	// cin >> firstValue;
	// 
	// cout << endl;
	// 
	// cout << "두 번째 값 입력 : ";
	// cin >> secondValue;
	// 
	// int result = 0;
	// 
	// for (int i = 1; i <= firstValue && i <= secondValue; i++)
	// {
	// 	if (firstValue % i == 0 && secondValue % i == 0)
	// 	{
	// 		result = i;
	// 	}
	// }
	// 
	// cout << endl;
	// 
	// cout << "최대 공약수 : " << result << endl;

#pragma endregion

	return 0;
}

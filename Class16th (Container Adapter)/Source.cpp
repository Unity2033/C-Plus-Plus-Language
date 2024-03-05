#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{

#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여
	// 만든 기능이 제한되거나 변형된 컨테이너입니다.

#pragma region Stack

	 //	std::stack<int> stack;
	 //	
	 //	stack.push(10);
	 //	stack.push(20);
	 //	stack.push(30);
	 //	stack.push(40);
	 //	stack.push(50);
	 //	
	 //	// cout << "Stack의 Top : " << stack.top() << endl;
	 //	
	 //	while (stack.empty() == false)
	 //	{
	 //		cout << stack.top() << endl;
	 //		stack.pop();
	 //	}


#pragma endregion

#pragma region Queue

	//	std::queue<int> queue;
	//	
	//	queue.push(10);
	//	queue.push(20);
	//	queue.push(30);
	//	queue.push(40);
	//	
	//	while (queue.size())
	//	{
	//		cout << queue.front() << endl;
	//	
	//		queue.pop();
	//	}

#pragma endregion

#pragma endregion


	return 0;
}


#include <iostream>

void Swap(int& firstValue, int& secondValue)
{
	int temp = firstValue;

	firstValue = secondValue;

	secondValue = temp;
}

int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는
	// 데이터의 흐름입니다.

	// char alphabet = 'A';
	// int data = 100;
	// 
	// std::cout << "data 변수의 값 : " << data << std::endl;
	// std::cout << "alphabet 변수의 값 : " << alphabet << std::endl;

	// 스트림의 경우 입력된 데이터는 출력 장치로 전달하며,
	// "<<" 연산자를 사용하여 자신이 참조한 값을 반환하여 출력합니다.

	// int selectCount = 0;
	// 
	// // 스트림으로 입력받을 때 ">>" 연산자를 사용하여 버퍼에 저장한 다음
	// // NULL 문자까지만 버퍼 안의 내용을 출력합니다. 
	// std::cin >> selectCount;
	// 
	// std::cout << "selectCount의 값 : " << selectCount;

	// 스트림의 운영체제에 의해 생성되며, 스트림 자체에 버퍼라는
	// 임시 메모리 공간이 존재합니다.

#pragma endregion

#pragma region 동적 할당

	// int * ptr = new int;
	// 
	// std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;
	// 
	// *ptr = 999;
	// 
	// std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;
	// 
	// delete ptr;

	// int * list = new int[5];
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	list[i] = 10 + i;
	// 
	// 	std::cout << "list[" << i << "]의 값 : " << list[i] << std::endl;
	// }
	// 
	// delete [ ] list;

#pragma endregion

#pragma region 참조자

	// int value = 100;
	// 
	// int & ref = value;
	// 
	// ref = 999;
	// 
	// std::cout << "ref의 값 : " << ref << std::endl;
	// std::cout << "value의 값 : " << value << std::endl;

	// int x = 10;
	// int y = 20;

	// Swap(x, y);

	// std::cout << "x의 값 : " << x << std::endl;
	// std::cout << "y의 값 : " << y << std::endl;

#pragma endregion

#pragma region 범위 기반 for문

	// int dataList[5] = { 1,2,3,4,5 };
	// 
	// for (const int & element : dataList)
	// {
	// 	 std::cout << "element의 값 : " << element << std::endl;
	// }

#pragma endregion

	return 0;
}

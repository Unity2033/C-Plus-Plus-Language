#include <iostream>
using namespace std;

class Object
{
private:
	int width;
	int height;

public:
	Object(int width, int height)
	{
		// this 포인터는 자기 자신을 가리키는 포인터입니다.
		this->width = width;
		this->height = height;
	}

	Object(Object& object) // 복사 생성자
	{
		cout << "Copy Constructor" << endl;
	}

	void Address()
	{
		cout << this << endl;
	}

	Object This()
	{
		return *this;
	}
};

int main()
{
#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는
	// 생성자입니다.

	// Object object1(10, 20);
	// 
	// object1.Address();
	// 
	// Object object2 = object1;
	// 
	// object2.Address();

	// 복사 생성자를 정의하지 않고 객체를 복사하게 되면
	// 기본 복사 생성자가 호출되기 때문에 얕은 복사로 객체가
	// 복사됩니다.
#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은 
	// 메모리를 가리키는 복사입니다.

	// int * ptr1 = new int;
	// 
	// int * ptr2 = ptr1;
	// 
	// cout << "ptr1의 값 : " << ptr1 << endl;
	// cout << "ptr2의 값 : " << ptr2 << endl;
	// 
	// // 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	// // 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
	// // 서로 참조된 객체도 함깨 영향을 받게 됩니다.
	// 
	// *ptr1 = 999;
	// 
	// cout << "ptr1이 가리키는 값 : " << *ptr1 << endl;
	// cout << "ptr1이 가리키는 값 : " << *ptr2 << endl;
	// 
	// delete ptr1;
	// delete ptr2;

	// 얕은 복사는 객체가 메모리에서 해제될 때 생성자의 실행 순서와
	// 반대로 소멸자가 호출되기 때문에 복사한 객체가 먼저 해제되므로,
	// 원래 있던 객체가 해제될 때 이미 해제된 메모리에 접근하게 됩니다.
#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사할 때, 참조 값이 아닌 인스턴스
	// 자체를 새로 복사하여 서로 다른 메모리를 
	// 생성하는 복사입니다.

	// int * ptr1 = new int;
	// 
	// int * ptr2 = new int;
	// 
	// *ptr1 = 999;
	// *ptr2 = 459;
	// 
	// cout << "ptr1이 가리키는 값 : " << *ptr1 << endl;
	// cout << "ptr2이 가리키는 값 : " << *ptr2 << endl;
	// 
	// delete ptr1;
	// delete ptr2;

#pragma endregion

	return 0;
}

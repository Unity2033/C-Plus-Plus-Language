#include <iostream>
#include <stdarg.h>
#include "Marine.h"

using namespace std;

class Mouse
{
public:
	Mouse()
	{
		cout << "Create Mouse" << endl;
	}

	~Mouse()
	{
		cout << "Relaese Mouse" << endl;
	}

	void OnDrag()
	{
		cout << "Drag" << endl;
	}

	void Connect()
	{
		cout << "Connect Mouse" << endl;
	}
};

class Keyboard
{		
public:
	Keyboard()
	{
		cout << "Create Keyboard" << endl;
	}

	~Keyboard()
	{
		cout << "Release Keyboard" << endl;
	}

	void Typing()
	{
		cout << "Typing" << endl;
	}

	void Connect()
	{
		cout << "Keyboard Connect" << endl;
	}
};

class Computer : public Mouse, public Keyboard
{
public:
	Computer()
	{
		cout << "Create Computer" << endl;
	}

	~Computer()
	{
		cout << "Release Computer" << endl;
	}

	void Use()
	{
		Typing();
		OnDrag();

		Mouse::Connect();
		Keyboard::Connect();
	}
};

void Debug(int count, ...)
{
	// va_list  : 가변 인자 목록으로 가변 인자의
	//            메모리 주소를 저장하는 포인터입니다.

	// va_start : 가변 인자의 시작 주소를 가져오는 변수입니다.

	// va_arg   : 가변 인자 포인터에서 특정 자료형의 크기만큼
	//            이동하는 변수이고, 값을 반환하는 변수입니다.

	// va_end   : 가변 인자 처리가 끝났을 때 포인터를 NULL로
	//            초기화하는 변수입니다.


}

int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정해주는 기능입니다.

    // Unit unit;
	// 
	// cout << "unit 오브젝트의 크기 : " << sizeof(unit) << endl;
	// 
	// Marine marine;
	// 
	// cout << "marine 오브젝트의 크기 : " << sizeof(marine) << endl;

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 
	// 수 없으며, 하위 클래스는 상위 클래스의 메모리를 포함한 상태로
	// 메모리의 크기가 결정됩니다.

#pragma endregion

#pragma region 다중 상속
	// 하나의 하위 클래스가 여러 개의 상위 클래스를
	// 상속받는 것입니다.
	
	// Computer computer;
	// 
	// computer.Use();

	// 다중 상속은 여러 개의 상위 클래스에 중복되는 속성이
	// 존재할 수 있기 때문에 범위 지정 연산자를 통해 상위
	// 클래스의 이름을 선언하고 속성을 사용해야 합니다.
#pragma endregion

#pragma region 가변 길이 매개 변수


#pragma endregion




	return 0;
}

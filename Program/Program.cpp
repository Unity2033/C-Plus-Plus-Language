#include <iostream>
#include "Phone.h"
#include "Marine.h"

using namespace std;

int main()
{
#pragma region 캡슐화
	// Phone phone1;
	// 
	// phone1.SetVolume(10);
	// 
	// cout << "phone1의 volume 값은 : " << phone1.GetVolume() << endl;
#pragma endregion

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



	return 0;
}

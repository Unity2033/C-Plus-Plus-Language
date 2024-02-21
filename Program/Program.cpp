#include <iostream>
#include "Vulture.h"
#include "Goliath.h"
#include "SeigeTank.h"

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로 
	// 재정의될 수 있는 함수입니다.

	// Mechanic * mechanic = new Vulture();
 	//
	// mechanic->Move();

	// // 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// // 하위 클래스에 재정의된 함수를 호출할 수 있습니다.

	// cout << "Mechanic의 크기 : " << sizeof(Mechanic) << endl;

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때
	// 객체 주소에 가상 함수 테이블을 추가합니다.
#pragma endregion

#pragma region Factory 




#pragma endregion



	return 0;
}

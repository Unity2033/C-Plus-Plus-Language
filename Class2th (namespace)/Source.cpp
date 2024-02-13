#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string.h>

char character = 'A';
using namespace std;

namespace EnemySKill
{
	void Skill()
	{
		cout << "Enemy Skill" << endl;
	}
}

using namespace EnemySKill;

namespace PlayerSkill
{
	void Skill()
	{
		cout << "Player Skill" << endl;
	}
}


int main()
{
#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데
	// 사용하는 연산자입니다.

	// char character = 'W';
	// 
	// std::cout << "character의 값 : " << character << std::endl;
	// 
	// // 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때
	// // 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 존재하기
	// // 때문에 전역 변수가 호출되지 않습니다.
	// 
	// std::cout << "전역 변수 character의 값 : " << ::character << std::endl;
	// 
	// 범위 지정 연산자를 사용하여 전역 변수의 범위를 지정하게 되면 전역 범위에
	// 접근할 수 있습니다.

#pragma endregion

#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	// Skill();
	// PlayerSkill::Skill();

	// 이름 공간은 같은 이름의 함수나 변수를 또 다른 공간에
	// 선언하여 중복되지 않도록 선언할 수 있습니다.

#pragma endregion

#pragma region 회문 판별

	/*bool flag = true;

	const char * content = "levwdwtwtel";

	int count = strlen(content);

	for (int i = 0; i < count / 2; i++)
	{
		if (content[i] != content[count - 1 - i])
		{
			flag = false;
			break;
		}
	}

	if (flag == true)
	{
		cout << "회문입니다." << endl;
	}
	else
	{
		cout << "회문이 아닙니다." << endl;
	}*/

#pragma endregion

#pragma region 소문자를 대문자로 변환하는 알고리즘

	//char nickName [ ] = "bard";

	//for (int i = 0; i < strlen(nickName); i++)
	//{
	//	   if (nickName[i] >= 'a' && nickName[i] <= 'z')
	//	   {
	//	   	   nickName[i] -= 32;
	//	   }
	//}
	//	  
	//cout << "nickName의 값 : " << nickName << endl;

#pragma endregion


	return 0;
}

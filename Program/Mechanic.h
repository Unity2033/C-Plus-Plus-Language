#pragma once
#include <iostream>

using namespace std;

class Mechanic
{
private:
	int health;
	int attack;

public:
	Mechanic();
	virtual ~Mechanic();

	// 가상 함수의 경우 가상 함수 테이블을 사용하여
	// 호출되는 함수를 싱행 시간에 결정하며, 정적으로
	// 선언된 함수는 가상 함수로 선언할 수 없습니다.
	virtual void Move();
};


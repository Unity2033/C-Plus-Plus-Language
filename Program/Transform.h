#pragma once
#include <iostream>

using namespace std;

class Transform
{
private:
	int x;
	int y;
	int z;	

public:
	Transform();

	void Rotate(int x = 10, int y = 10, int z = 10);
};


#include <stdio.h> // 기본 입출력 헤더 파일

void main()	
{
#pragma region 서식 지정자
	/*
	char character = 'B';
	int data = 100;
	float decimal = 9.9531111111f;

	// 출력하기 위한 자료형의 정보를 명시적으로
	// 지정해주는 것입니다.

	// "%c" 문자 (서식 지정자)
	// "%d"	정수 (서식 지정자)
	// "%f" 실수 (서식 지정자 float) 
	
	// 서식과 변수의 형태가 일치하지 않으면
	// 원하는 값이 출력되지 않습니다.
	// printf("character의 값 : %f\n", character); (잘못된 부분)
	printf("data의 값 : %d\n", data);

	// float 4 byte 크기의 실수형 자료형은 소수점 이하
	// 6자리까지만 표기합니다.
	printf("decimal의 값 : %f\n", decimal);

	// 서식 지정자의 순서는 왼쪽에서부터 시작합니다.
	printf("data : %d, decimal : %f", data, decimal);

	// printf(data); (X)
	*/
#pragma endregion

#pragma region 비트(bit)
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

	// 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는
	// 연산자입니다.

	// AND
	// 두 개의 피연산자 모두 1이면 1을 반환하는 연산자입니다.
	char num1 = 10; // 0000 1010 <- 1 BYTE
	char num2 = 15; // 0000 1111 <- 1 BYTE
	char num3 = 129; // -128 ~ 127 

	printf("num1과 num2를 AND 연산한 결과 : %d\n", num1 & num2);

	// OR
	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는
	// 연산자입니다.
	printf("num1과 num2를 OR 연산한 결과 : %d\n", num1 | num2);

	// XOR
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면 1을
	// 반환하는 연산자입니다.
	printf("num1과 num2를 XOR 연산한 결과 : %d\n", num1 ^ num2);

	// NOT
	// 비트를 반전시키는 연산자입니다.
	printf("num1을 NOT 연산한 결과 : %d\n", ~num1);

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에
	// 1이 있다면 값은 음수가 됩니다.
	printf("num3의 값 : %d", num3);
		

#pragma endregion


}

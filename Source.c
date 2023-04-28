#include <stdio.h> 

#pragma region 구조체
    // 여러 개의 변수를 하나의 집합으로 구조화한
    // 다음 하나의 객체를 생성하는 것입니다.
struct Player
{
    char grade;   // 1 byte
    int attack;   // 4 byte
    float health; // 4 byte

    // 구조체를 선언하기 전에 구조체는 메모리 공간이
    // 생성되지 않으므로, 구조체 내부에 있는 데이터를
    // 초기화할 수 없습니다.
};

struct Model
{
    int weight;   // 4 byte
    short mesh;   // 2 byte
    // Padding       2 byte
    double size;  // 8 byte

    // 구조체 크기의 경우 멤버 변수의 순서에 따라
    // 메모리의 크기가 다르게 설정될 수 있으며,
    // 구조체 크기를 결정하는 형태는 기본 자료형으로만 
    // 구성됩니다.
};


#pragma endregion


void main()	
{    
#pragma region 구조체
    // struct Player player;

// player.attack = 10;
// player.grade = 'A';
// player.health = 91.25f;

// printf("player.attack의 값 : %d\n", player.attack);
// printf("player.grade의 값 : %c\n", player.grade);
// printf("player.health의 값 : %f\n", player.health);

// 구조체 초기화
// 구조체를 초기화 리스트로 초기화할 때 구조체에 선언된
// 변수의 순서로 정의해주셔야 합니다.

//                        char int float
// struct Player newPlayer = {'B', 15 , 66.85f};
// 
// printf("newPlayer.attack의 값 : %d\n", newPlayer.attack);
// printf("newPlayer.grade의 값 : %c\n", newPlayer.grade);
// printf("newPlayer.health의 값 : %f\n", newPlayer.health);
#pragma endregion

#pragma region 바이트 패딩
    // 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
    // 읽을 수 있도록, 컴파일러가 레지스터의 블록에
    // 맞추어 바이트를 패딩 해주는 작업입니다.

    // struct Player otherPlayer;
    // struct Model model;
    // 
    // // 구조체의 크기는 구조체를 구성하는 멤버 중에
    // // 크기가 가장 큰 자료형의 배수가 되도록 설정합니다.
    // printf("Player의 크기 : %d\n", sizeof(otherPlayer));
    // printf("Model의 크기 : %d\n", sizeof(model));

#pragma endregion

#pragma region 소수
    // 1보다 큰 자연수 중 1과 자기 자신만을 약수로 
    // 가지는 수다.

   // int count = 0;
   // int number = 0;
   //
   // scanf_s("%d", &number);
   //
   // for (int i = 2; i <= number; i++)
   // {
   //     if (number % i == 0)
   //     {
   //         count++; 
   //     }
   // }
   //
   // if (count == 1)
   // {
   //     printf("소수입니다.");
   // }
   // else
   // {
   //     printf("소수가 아닙니다.");
   // }

    // 4 <- 입력

    // 2 입력 -> 소수
    // 4 입력 -> 소수가 아닙니다.




#pragma endregion



    
  
}

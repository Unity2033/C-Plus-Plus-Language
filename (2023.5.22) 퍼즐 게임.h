#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 11
#define HEIGHT 11

typedef struct Player
{
	int x;
	int y;
	const char* shape;
}Player;

// ÁÂÇ¥ ÀÌµ¿ ÇÔ¼ö
void GotoXY(int x, int y)
{
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// ¹Ì·Î ¸Ê µ¥ÀÌÅÍ
char maze[WIDTH][HEIGHT];

// ¹Ì·Î ¸Ê »ý¼º
void CreateMaze()
{
	// 0 : ºó °ø°£ ("  ")
	// 1 : º® (¡à)
	// 2 : Å»Ãâ±¸ (¡Ý)

	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1000011111");
	strcpy(maze[2], "1101011111");
	strcpy(maze[3], "1111011111");
	strcpy(maze[4], "1100001111");
	strcpy(maze[5], "1101101111");
	strcpy(maze[6], "1101100011");
	strcpy(maze[7], "1101111011");
	strcpy(maze[8], "1100011011");
	strcpy(maze[9], "1111011002");
	strcpy(maze[10], "1111111111");
}

void Renderer()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("¡á");
			}
			else if (maze[i][j] == '2')
			{
				printf("¡Ý");
			}
		}

		printf("\n");
	}
}

void Keyboard(char map[WIDTH][HEIGHT], Player* ptrPlayer)
{
	char key = 0;

	if (_kbhit())
	{
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP: if (maze[ptrPlayer->y - 1][ptrPlayer->x / 2] != '1')
		{
			ptrPlayer->y--;
		}
			   break;
		case LEFT:	if (maze[ptrPlayer->y][ptrPlayer->x / 2 - 1] != '1')
		{
			ptrPlayer->x -= 2;
		}
				 break;
		case RIGHT: if (maze[ptrPlayer->y][ptrPlayer->x / 2 + 1] != '1')
		{
			ptrPlayer->x += 2;
		}
				  break;
		case DOWN:	if (maze[ptrPlayer->y + 1][ptrPlayer->x / 2] != '1')
		{
			ptrPlayer->y++;
		}
				 break;
		}
	}
}

int main()
{
	Player player = { 2, 6, "¡Ú" };

	CreateMaze();

	while (1)
	{
		Renderer();

		Keyboard(maze, &player);

		GotoXY(player.x, player.y);
		printf("%s", player.shape);

		Sleep(100);
		system("cls");
	}

	return 0;
}

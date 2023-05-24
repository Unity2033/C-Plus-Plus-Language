#pragma once

#include <stdio.h>
#include <conio.h>
#include <windows.h>

void ReadTextFile(const char* fileName)
{
	// 파일 읽기
	FILE* readPtr = fopen(fileName, "r");   

	char buffer[10000] = { 0, };

	fread(buffer, 1, 10000, readPtr); // 파일 전체 읽기
	printf("%s", buffer);

	fclose(readPtr);
}
#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    gotoxy(10, 15);
    // 빨간색 텍스트
    printf("\033[31m교수님 시험 문제 쉽게 내주세요\033[0m\n");
    // 초록색 텍스트와 노란색 배경
    printf("\033[32m\033[43m교수님 어떻게 해야하나요\033[0m\n");
    // 굵은 텍스트와 파란색 텍스트
    printf("\033[1m\033[43m교수님 이렇게 하는게 맞나요?\033[0m\n");
    printf("\033[32m안녕하세요 이렇게 하는거 맞을까요\033[0m\n");

    return 0;
}


   
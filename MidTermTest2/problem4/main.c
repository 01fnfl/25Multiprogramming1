#include <stdio.h>

int main() {

    printf("    o         o  \n");
    printf("    |         |  \n");
    printf("  ---------------\n");
    printf("  |\/\/\/\/\/\/\/\\n");
    printf("  |              |\n");
    printf("  ----------------\n");
    printf("                      \n");
    printf("----------------------\n");
    printf("|\/\/\/\/\/\/\/\/\/\/\/\\n");
    printf("|                        |\n");
    printf("-------------------------\n");
    return 0;
}

#include <stdio.h>
#include <windows.h>

// 색상 설정 함수
void setColor(int textColor, int bgColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgColor << 4) | textColor);
}

int main() {
    // 콘솔 색상 표 참고:
    // 0=검정, 1=파랑, 2=초록, 3=청록, 4=빨강, 5=보라, 6=노랑, 7=하양, 8~15=밝은색

    system("cls"); // 콘솔 화면 초기화

    // 1. 지그재그 배경 마젠타(5), 글씨 흰색(15)
    setColor(15, 5);
    printf("~^~^~^~^~^~^~^~^~\n");

    // 2. 촛불 (노란색 14), 검정배경
    setColor(14, 0);
    printf("   i   i   \n");

    // 3. 초 (파랑/초록), 검정배경
    setColor(1, 0); // 파란 초
    printf("   |");
    setColor(2, 0); // 초록 초
    printf("   |   \n");

    // 4. 케이크 테두리 (흰글씨, 검정배경)
    setColor(15, 0);
    printf("  ***********  \n");

    // 5. 케이크 본체 (검정글씨, 흰배경)
    setColor(0, 7);
    printf("  |  CAKE!  |  \n");
    printf("  | YUMMY! |  \n");

    // 6. 테두리 다시
    setColor(15, 0);
    printf("  ***********  \n");

    // 색상 초기화
    setColor(7, 0);
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <windows.h>

void setColor(int textColor, int bgColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgColor << 4) | textColor);
}

void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void drawCake() {
    system("cls");

    // 1. 지그재그 장식
    setColor(15, 5);  // 흰글씨, 마젠타 배경
    gotoxy(10, 1); printf("~^~^~^~^~^~^~^~");

    // 2. 촛불
    setColor(14, 0); // 노란 글씨, 검정 배경
    gotoxy(14, 2); printf("i   i");

    // 3. 초
    setColor(1, 0);  // 파랑
    gotoxy(14, 3); printf("|");
    setColor(2, 0);  // 초록
    printf("   |");

    // 4. 테두리
    setColor(15, 0); // 흰글씨, 검정배경
    gotoxy(10, 4); printf("*************");

    // 5. 케이크 본체
    setColor(0, 7); // 검정글씨, 흰배경
    gotoxy(10, 5); printf("|           |");
    gotoxy(10, 6); printf("|           |");

    // 6. 테두리
    setColor(15, 0);
    gotoxy(10, 7); printf("*************");

    // 초기화
    setColor(7, 0);
}

void printHappy() {
    setColor(13, 7); // 핑크글씨, 흰배경
    gotoxy(14, 5); // 윗단 중앙
    printf("Happy");
    setColor(7, 0);
}

void printBirthday() {
    setColor(6, 7); // 노랑글씨, 흰배경
    gotoxy(13, 6); // 아랫단 중앙
    printf("Birthday");
    setColor(7, 0);
}

int main() {
    drawCake();

    int state = 0;
    char ch;

    while (1) {
        ch = _getch();
        if (ch == 'H' || ch == 'h') {
            if (state == 0) {
                printHappy();
                state = 1;
            }
            else if (state == 1) {
                printBirthday();
                state = 2;
            }
        }
    }

    return 0;
}

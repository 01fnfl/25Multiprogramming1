#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    char c;

    gotoxy(2, 2);
    printf("input>");

    while (1) {
        c = _getch();

        if (c >= '0' && c <= '9') {
            gotoxy(9, 2);        
            printf("%c", c);
            break;
        }
        else {
            gotoxy(2, 3);
            printf("Error: ���ڸ� �Է� �����մϴ�. (�Է�: '%c')   ", c);
        }
    }

    return 0;
}

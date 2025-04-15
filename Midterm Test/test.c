#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void showPopup() {
    int x = 30, y = 10;
    gotoxy(x, y);     printf("\033[46;30m+--------------------------+\033[0m");
    gotoxy(x, y + 1); printf("\033[46;30m|     팝업이 생성됨!      |\033[0m");
    gotoxy(x, y + 2); printf("\033[46;30m| 여기에 메시지를 작성해요 |\033[0m");
    gotoxy(x, y + 3); printf("\033[46;30m+--------------------------+\033[0m");
}

int main() {
    system("cls");

 
    gotoxy(10, 2);  printf("*   *       *       *      *");
    gotoxy(10, 3);  printf("    *     *     *       *");

    gotoxy(5, 5);   printf("    /\\      /\\      /\\      /\\   ");
    gotoxy(5, 6);   printf("   /  \\    /  \\    /  \\    /  \\  ");
    gotoxy(5, 7);   printf("  /    \\  /    \\  /    \\  /    \\ ");
    gotoxy(5, 8);   printf(" /      \\/      \\/      \\/      \\");

   
    gotoxy(30, 10); printf("\033[41m        _________        \033[0m");
    gotoxy(30, 11); printf("\033[41m       /         \\       \033[0m");
    gotoxy(30, 12); printf("\033[41m      /           \\      \033[0m");
    gotoxy(30, 13); printf("\033[41m     /             \\     \033[0m");
    gotoxy(30, 14); printf("\033[41m    /_______________\\    \033[0m");

    
    gotoxy(38, 8);  printf("\033[47m    ||    \033[0m");
    gotoxy(38, 9);  printf("\033[47m    ||    \033[0m");

  
    gotoxy(33, 11); printf("\033[45;32m교수님 죄송합니다 공부 더열심히할게요\033[0m");

   
    for (int i = 15; i <= 23; i++) {
        gotoxy(30, i);
        printf("\033[43;30m|                           |\033[0m");
    }

   
    gotoxy(34, 17); printf("\033[44;97m[  ]  [  ]\033[0m");
    gotoxy(34, 19); printf("\033[44;97m[__]  [__]\033[0m");

    gotoxy(50, 17); printf("\033[44;97m[  ]  [  ]\033[0m");
    gotoxy(50, 19); printf("\033[44;97m[__]  [__]\033[0m");

   
    gotoxy(42, 20); printf("\033[47;30m   ||   \033[0m");
    gotoxy(42, 21); printf("\033[47;30m   ||   \033[0m");
    gotoxy(42, 22); printf("\033[47;30m   ||   \033[0m");

   
    gotoxy(0, 24); printf("\033[32m============================================================================\033[0m");

  
    char input;
    while (1) {
        input = _getch();
        if (input == 'n' || input == 'N') {
            gotoxy(30, 26); 
            printf("\033[97m프로그램을 종료합니다.\033[0m\n");
            break;
        }
        else if (input == 'y' || input == 'Y') {
            showPopup(); 
        }
        else {
            gotoxy(20, 27); 
            printf("\033[91m다시 입력해주세요!!!\033[0m");
        }
    }

    return 0;
}



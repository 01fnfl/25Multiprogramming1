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

// ���� ���� �Լ�
void setColor(int textColor, int bgColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgColor << 4) | textColor);
}

int main() {
    // �ܼ� ���� ǥ ����:
    // 0=����, 1=�Ķ�, 2=�ʷ�, 3=û��, 4=����, 5=����, 6=���, 7=�Ͼ�, 8~15=������

    system("cls"); // �ܼ� ȭ�� �ʱ�ȭ

    // 1. ������� ��� ����Ÿ(5), �۾� ���(15)
    setColor(15, 5);
    printf("~^~^~^~^~^~^~^~^~\n");

    // 2. �к� (����� 14), �������
    setColor(14, 0);
    printf("   i   i   \n");

    // 3. �� (�Ķ�/�ʷ�), �������
    setColor(1, 0); // �Ķ� ��
    printf("   |");
    setColor(2, 0); // �ʷ� ��
    printf("   |   \n");

    // 4. ����ũ �׵θ� (��۾�, �������)
    setColor(15, 0);
    printf("  ***********  \n");

    // 5. ����ũ ��ü (�����۾�, ����)
    setColor(0, 7);
    printf("  |  CAKE!  |  \n");
    printf("  | YUMMY! |  \n");

    // 6. �׵θ� �ٽ�
    setColor(15, 0);
    printf("  ***********  \n");

    // ���� �ʱ�ȭ
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

    // 1. ������� ���
    setColor(15, 5);  // ��۾�, ����Ÿ ���
    gotoxy(10, 1); printf("~^~^~^~^~^~^~^~");

    // 2. �к�
    setColor(14, 0); // ��� �۾�, ���� ���
    gotoxy(14, 2); printf("i   i");

    // 3. ��
    setColor(1, 0);  // �Ķ�
    gotoxy(14, 3); printf("|");
    setColor(2, 0);  // �ʷ�
    printf("   |");

    // 4. �׵θ�
    setColor(15, 0); // ��۾�, �������
    gotoxy(10, 4); printf("*************");

    // 5. ����ũ ��ü
    setColor(0, 7); // �����۾�, ����
    gotoxy(10, 5); printf("|           |");
    gotoxy(10, 6); printf("|           |");

    // 6. �׵θ�
    setColor(15, 0);
    gotoxy(10, 7); printf("*************");

    // �ʱ�ȭ
    setColor(7, 0);
}

void printHappy() {
    setColor(13, 7); // ��ũ�۾�, ����
    gotoxy(14, 5); // ���� �߾�
    printf("Happy");
    setColor(7, 0);
}

void printBirthday() {
    setColor(6, 7); // ����۾�, ����
    gotoxy(13, 6); // �Ʒ��� �߾�
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

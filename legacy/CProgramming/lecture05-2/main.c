#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    gotoxy(10, 15);
    // ������ �ؽ�Ʈ
    printf("\033[31m������ ���� ���� ���� ���ּ���\033[0m\n");
    // �ʷϻ� �ؽ�Ʈ�� ����� ���
    printf("\033[32m\033[43m������ ��� �ؾ��ϳ���\033[0m\n");
    // ���� �ؽ�Ʈ�� �Ķ��� �ؽ�Ʈ
    printf("\033[1m\033[43m������ �̷��� �ϴ°� �³���?\033[0m\n");
    printf("\033[32m�ȳ��ϼ��� �̷��� �ϴ°� �������\033[0m\n");

    return 0;
}


   
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


#include <stdio.h>

// 4. PassOrFail �Լ� ����
int PassOrFail(int score) {
    if (score >= 50)
        return 1;
    else
        return 0;
}

// 5. main �Լ�

int main() {
    int myScore = 46; // ���� ������ ���⿡ �Է��ϼ���
    int result = PassOrFail(myScore);

    if (result == 1)
        printf("����� �����ϴ�!\n");
    else
        printf("����� �ֽ��ϴ�\n");

    return 0;
}

#include <stdio.h>

// SS �Լ� ����
int SS(int mp, int range) {
    // 1. mp�� 50 �̻��̾�� �ϰ�
    // 2. range�� 10 �ʰ��� ��쿡 ���ʻ�� �ߵ�
    if (mp >= 50 && range > 10) {
        printf("���ΰ� : �ʴ� ������ ȹ���߳�?\n");
    }

    // �׻� 0�� ����
    return 0;
}

int main() {
    // ���ΰ��� ���� ����
    int mp = 150;   // ���� mp
    int range = 20;  // ���� range

    // SS �Լ� ȣ��
    SS(mp, range);

    return 0;
}

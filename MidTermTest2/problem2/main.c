#include <stdio.h>

// SS 함수 정의
int SS(int mp, int range) {
    // 1. mp가 50 이상이어야 하고
    // 2. range가 10 초과일 경우에 초필살기 발동
    if (mp >= 50 && range > 10) {
        printf("주인공 : 너는 점수를 획득했나?\n");
    }

    // 항상 0을 리턴
    return 0;
}

int main() {
    // 주인공의 상태 설정
    int mp = 150;   // 현재 mp
    int range = 20;  // 현재 range

    // SS 함수 호출
    SS(mp, range);

    return 0;
}

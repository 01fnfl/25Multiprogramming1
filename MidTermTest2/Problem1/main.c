#include <stdio.h>

// 4. PassOrFail 함수 정의
int PassOrFail(int score) {
    if (score >= 50)
        return 1;
    else
        return 0;
}

// 5. main 함수

int main() {
    int myScore = 46; // 예상 점수를 여기에 입력하세요
    int result = PassOrFail(myScore);

    if (result == 1)
        printf("재시험 없습니다!\n");
    else
        printf("재시험 있습니다\n");

    return 0;
}

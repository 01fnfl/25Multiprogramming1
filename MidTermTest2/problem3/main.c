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


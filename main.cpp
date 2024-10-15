#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wait(int seconds) {
    int ms = 1000 * seconds;
    clock_t start = clock();
    while (clock() < start + ms);
}

int main() {
    srand(time(0));  // ランダム数生成のシード設定
    int dice = rand() % 6 + 1;  // 1～6までのサイコロの結果を生成
    int evenFlag = dice % 2 == 0;  // 偶数かどうかをチェック

    printf("サイコロを振りました。半か丁か当ててください (1: 半, 0: 丁): ");

    // ユーザーの入力をラムダ式でキャプチャ
    int (*userInput)() = []() {
        int response;
        scanf_s("%d", &response);
        return response;
        };

    int inputResult = userInput();  // 入力された値を取得

    if (inputResult == evenFlag) {
        printf("正解\n");
    } else {
        printf("不正解。%dで%s\n", dice, evenFlag ? "丁" : "半");
    }

    return 0;
}
#include "Enemy.h"

int main() {
    Enemy enemy;

    // 状態遷移を実行
    while (true) {
        enemy.Update();
        if (enemy.GetState() == Enemy::State::None) {
            break; // 状態遷移が完了したらループを終了
        }
    }

    return 0;
}
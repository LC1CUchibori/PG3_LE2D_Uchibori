#include "Enemy.h"

Enemy::Enemy() : currentState_(State::Spawn) {
    stateFunction_ = &Enemy::Spawn;
}

void Enemy::Update() {
    if (stateFunction_) {
        (this->*stateFunction_)();
    }
}

Enemy::State Enemy::GetState() const {
    return currentState_;
}

void Enemy::Spawn() {
    std::cout << "Enemy Approach!" << std::endl;
    currentState_ = State::Attack;
    stateFunction_ = &Enemy::Attack;
}

void Enemy::Attack() {
    std::cout << "Enemy Attack!" << std::endl;
    currentState_ = State::Retreat;
    stateFunction_ = &Enemy::Retreat;
}

void Enemy::Retreat() {
    std::cout << "Enemy Secession!" << std::endl;
    currentState_ = State::None;
    stateFunction_ = nullptr;
}
#include <iostream>

class Enemy {
public:
    enum class State {
        Spawn,
        Attack,
        Retreat,
        None
    };

    Enemy(); 

    void Update(); 
    State GetState() const; 

private:

    State currentState_; 
    void (Enemy::*stateFunction_)(); 

    void Spawn();  
    void Attack(); 
    void Retreat(); 
};


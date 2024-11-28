#pragma once

#pragma once

#include <stdio.h>

class Animal {
public:
    virtual void AnimalVoice(); // 仮想関数
    virtual ~Animal() {} // 仮想デストラクタ
};

class Mouse : public Animal {
public:
    void AnimalVoice() override; 
};

class Cat : public Animal {
public:
    void AnimalVoice() override;
};
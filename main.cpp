#include "Animal.h"

int main() {
    Animal* mouse = new Mouse(); 
    Animal* cat = new Cat(); 

    mouse->AnimalVoice(); 
    cat->AnimalVoice(); 

    // メモリ解放
    delete mouse;
    delete cat;

    return 0;
}
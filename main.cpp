#include "animal.h"

int main() {
    Animal* myDog = new Dog(); // Dogのインスタンスを生成
    Animal* myCat = new Cat(); // Catのインスタンスを生成

    myDog->makeSound(); // "ワン! ワン!" 　　 と出力
    myCat->makeSound(); // "ニャン! ニャン!"  と出力

    // メモリ解放
    delete myDog;
    delete myCat;

    return 0;
}
#include <iostream>

// 抽象クラス IShape
class IShape {
public:
    virtual void Size() = 0;
    virtual void Draw() = 0;
    virtual ~IShape() {} // 仮想デストラクタ
};

// Circle クラス
class Circle : public IShape {
private:
    float radius;
    float size;
public:
    void Size() override {
        radius = 5.0f;
        size = radius * radius * 3.14f;
        std::cout << "円の半径: " << radius << std::endl;
    }
    void Draw() override {
        std::cout << "円の面積: " << size << std::endl;
    }
};

// Rectangle クラス
class Rectangle : public IShape {
private:
    float width;
    float height;
    float size;
public:
    void Size() override {
        width = 10.0f;
        height = 5.0f;
        size = width * height;
        std::cout << "矩形の幅: " << width << " 高さ: " << height << std::endl;
    }
    void Draw() override {
        std::cout << "矩形の面積: " << size << std::endl;
    }
};

int main() {
    IShape* shapes[2] = { new Circle(), new Rectangle() };

    for (int i = 0; i < 2; ++i) {
        shapes[i]->Size();
        shapes[i]->Draw();
        delete shapes[i];
    }

    return 0;
}

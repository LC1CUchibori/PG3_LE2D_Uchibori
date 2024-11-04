#include <iostream>
#include <type_traits>

template <typename Type1, typename Type2>
class TemplateClass {
public:
    // コンストラクタ
    TemplateClass(Type1 number1, Type2 number2)
        : Number1(number1), Number2(number2) {}

    // Min関数: 小さい方の値を返す
    auto Min() -> typename std::common_type<Type1, Type2>::type {
        return (Number1 < Number2) ? Number1 : Number2;
    }

private:
    Type1 Number1;
    Type2 Number2;
};

int main() {
    TemplateClass<int, float> intFloatTemplate(10, 50.0f);
    TemplateClass<int, double> intDoubleTemplate(80, 13.0);
    TemplateClass<float, int> floatIntTemplate(2.0f, 9);
    TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
    TemplateClass<double, int> doubleIntTemplate(666.0, 333);
    TemplateClass<double, float> doubleFloatTemplate(435.8, 563.5f);

    std::cout << "int(10) と float(50.0f) を比べて小さい数字を表す：" << intFloatTemplate.Min() << std::endl;
    std::cout << "int(80) と double(13.0) を比べて小さい数字を表す：" << intDoubleTemplate.Min() << std::endl;
    std::cout << "float(2.0f) と int(9) を比べて小さい数字を表す：" << floatIntTemplate.Min() << std::endl;
    std::cout << "float(11.0f) と double(3.5) を比べて小さい数字を表す：" << floatDoubleTemplate.Min() << std::endl;
    std::cout << "double(666.0) と int(333) を比べて小さい数字を表す：" << doubleIntTemplate.Min() << std::endl;
    std::cout << "double(435.8) と float(563.5f) を比べて小さい数字を表す：" << doubleFloatTemplate.Min() << std::endl;

    return 0;
}

#include "rectangle.h"

void rectangle::Size() {
	answer = wide * height;
}

void rectangle::Draw() {
	printf("短形の面積：%d\n", answer);
}

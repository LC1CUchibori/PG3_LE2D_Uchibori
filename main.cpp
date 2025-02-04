#include <stdio.h>
#include "IShape.h"
#include "circle.h"
#include "rectangle.h"

int main(void) {

	IShape* shape[2];

	shape[0] = new circle;
	shape[1] = new rectangle;

	printf("円の半径:4\n短形の底辺:2\n短形の高さ:3\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Size();


	printf("\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Draw();

	return 0;
}
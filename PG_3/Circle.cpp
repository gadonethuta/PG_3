#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
	//値代入
	pi = 3.14f;
	radius = 10.0f;
}

Circle::~Circle() {
	printf("円を消す\n");
}

void Circle::Size() {
	printf("円のエリア＝%f\n", pi * radius * radius);
}

void Circle::Draw() {
	printf("円を描画\n");
}

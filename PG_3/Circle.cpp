#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
	pi = 3.14f;
	radius = 10.0f;
}

Circle::~Circle() {
}

void Circle::Size() {
	printf("円のエリア＝%f\n", pi * radius * radius);
}

void Circle::Draw() {
	printf("円を描画\n");
}

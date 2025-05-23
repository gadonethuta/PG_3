#include "Rect.h"
#include <stdio.h>

Rect::Rect() {
	width = 2.0f;
	height = 3.0f;
}

Rect::~Rect() {
}

void Rect::Size() {
	printf("矩形のエリア＝%f\n", width * height);
}

void Rect::Draw() {
	printf("矩形を描画\n");
}

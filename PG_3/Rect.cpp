#include "Rect.h"
#include <stdio.h>

Rect::Rect() {
	//値代入
	width = 2.0f;
	height = 3.0f;
}

Rect::~Rect() {
	printf("矩形を消す\n");
}

void Rect::Size() {
	printf("矩形のエリア＝%f\n", width * height);
}

void Rect::Draw() {
	printf("矩形を描画\n");
}

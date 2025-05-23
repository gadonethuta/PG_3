#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "Circle.h"
#include "Rect.h"

int main() {
	//IShape2つ作る
	IShape *shape[2];
	shape[0] = new Circle();
	shape[1] = new Rect();

	//ポリモーフィズムで関数を呼ぶ
	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
		shape[i]->Draw();
	}

	//ポリモーフィズムでインスタンスを消す
	for (int i = 0; i < 2; i++) {
		delete shape[i];
		shape[i] = nullptr;
	}

	return 0;
}


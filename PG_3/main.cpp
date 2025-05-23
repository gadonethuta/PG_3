#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "Circle.h"
#include "Rect.h"

int main() {
	//
	IShape *shape[2];
	shape[0] = new Circle();
	shape[1] = new Rect();

	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
		shape[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete shape[i];
		shape[i] = nullptr;
	}

	return 0;
}


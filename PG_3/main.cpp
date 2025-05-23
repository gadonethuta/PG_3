#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//-----------クラステンプレート
//template <typename T>
//class Box {
//public:
//	T height_;
//	T width_;
//
//	Box(T height, T width) : height_(height), width_(width) {}
//
//	T Size() {
//		return height_ * width_;
//	}
//};
//
//int main() {
//	
//	Box<int> b1(10, 3);
//	Box<double> b2(12.0, 2.0);
//
//	printf("%d\n", b1.Size());
//	printf("%lf", b2.Size());
//	
//	return 0;
//}

//--------------関数テンプレート
template <typename Type>
Type Add(Type a, Type b) {
	return static_cast<Type>(a + b);
}

int main() {
	printf("%d\n", Add<int>(10, 2));
	printf("%f\n", Add<float>(11.4f, 51.4f));

	return 0;
}
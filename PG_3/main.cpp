#include <stdio.h>
//3
#include<functional>

int main(int argc, const char *argv[]) {
	//1
	//[]() {printf("lamda test"); }();
	
	//2
	/*int num = 10;
	auto fx = [=](int i) {return num + i; };

	printf("%d", fx(2));*/
	
	//3
	std::function<int(int)> fx = [](int i) {return i + 1; };
	auto fx2 = [](int i) { return i + 1; };
	printf("%d\n%d\n", fx(2), fx2(5));
	return 0;
}
#include <stdio.h>
#include <Windows.h>

typedef int (*newType)(int, int);//こうしたほうがいい
typedef void (*testType)();

void PrintHelloWorld() {
	printf("Hello World!\n");
}

int Add(int a, int b) {
	return a + b;
}

int Subtract(int a, int b) {
	return a - b;
}

int Multiply(int a, int b) {
	return a * b;
}

int Division(int a, int b) {
	return a / b;
}

void SetTimeout(testType p, int second) {
	Sleep(second * 1000);
	p();
}

int main() {
	void (*pFunc)();
	pFunc = PrintHelloWorld;
	printf("printHelloWorldのアドレス＝%p\n",PrintHelloWorld);
	printf("pFuncの内容＝%p\n", *pFunc);
	pFunc();//ここで本当に起動

	int l = 114;
	int h = 514;
	int (*calc)(int, int);

	calc = Add;
	printf("calc = %d\n", calc(l,h));

	calc = Subtract;
	printf("calc = %d\n", calc(l, h));

	newType funcArray[4]{
		Add,
		Subtract,
		Multiply,
		Division
	};

	for (int i = 0; i < 4; i++) {
		printf("funcArray[%d] = %d\n", i, funcArray[i](l, h));
	}

	testType p;
	p = PrintHelloWorld;
	SetTimeout(p, 5);
	return 0;
}

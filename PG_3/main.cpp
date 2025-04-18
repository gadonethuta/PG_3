#include <stdio.h>

void PrintHelloWorld() {
	printf("Hello World!\n");
}

int Add(int a, int b) {
	return a + b;
}

int Subtract(int a, int b) {
	return a - b;
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

	return 0;
}

#include <stdio.h>

void PrintHelloWorld() {
	printf("Hello World!");
}

int main() {
	void (*pFunc)();
	pFunc = PrintHelloWorld;
	printf("printHelloWorldのアドレス＝%p\n",PrintHelloWorld);
	printf("pFuncの内容＝%p\n", *pFunc);
	pFunc();//ここで本当に起動
	return 0;
}

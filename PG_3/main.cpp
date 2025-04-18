#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void (*newType)(int, int);

void SetTimeout(newType func, int second);

int main() {
	//ランダムのたねを作る
	srand(time(nullptr));
	newType CompareResult;

	//エラーならー１のため初期化
	int diceRandom = -1;
	int playerInput = -1;

	diceRandom = rand() % 6 + 1;

	printf("random = %d\n", diceRandom);
	
	printf("0偶数の場合は0、奇数の場合は1を押してください : ");
	scanf_s("%d", &playerInput);

	if (diceRandom % 2 == playerInput) {
		printf("Correct");
	} else {
		printf("False");
	}

	return 0;
}

void SetTimeout(newType func, int second) {
	
}

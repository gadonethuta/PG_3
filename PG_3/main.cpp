#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>



int main() {
	//ランダムのたねを作る
	srand(time(nullptr));

	//エラーならー１のため初期化
	int diceRandom = -1;
	int playerInput = -1;

	diceRandom = rand() % 6 + 1;

	printf("random = %d\n", diceRandom);

	return 0;
}

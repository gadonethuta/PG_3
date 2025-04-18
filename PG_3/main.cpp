#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>



int main() {
	//ランダムのたねを作る
	srand(time(nullptr));

	int diceRandom = -1;//エラーならー１のため初期化
	diceRandom = rand() % 6 + 1;

	printf("%d/n", diceRandom);

	return 0;
}

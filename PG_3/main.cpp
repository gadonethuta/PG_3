#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//関数ポインター
typedef void (*newType)(int *, int *);

/// <summary>
/// 時間少し立ってから関数を呼ぶ
/// </summary>
/// <param name="func">関数ポインター</param>
/// <param name="a">変数１</param>
/// <param name="b">変数２</param>
void SetTimeout(newType func, int a, int b);

/// <summary>
/// サイコロの結果とプレイヤーの答えを比べる
/// </summary>
/// <param name="diceResult">サイコロの結果</param>
/// <param name="playerGuess">プレイヤーの答え</param>
void Compare(int *diceResult, int *playerGuess);

int main() {
	//ランダムのたねを作る
	srand(static_cast<int>(time(nullptr)));

	//関数ポインターの初期化
	newType pFunc;
	pFunc = Compare;

	//エラーならー１のため初期化
	int diceRandom = -1;
	int playerInput = -1;

	//サイコロをランダムする
	diceRandom = rand() % 6 + 1;

	//試してみるため
	//printf("random = %d\n", diceRandom);
	
	//入力
	printf("偶数の場合は0、奇数の場合は1を押してください : ");
	scanf_s("%d", &playerInput);

	//時間立ってから関数ポインターを呼ぶ
	SetTimeout(pFunc, diceRandom, playerInput);

	return 0;
}

void SetTimeout(newType func, int a, int b) {
	//3秒止まる
	Sleep(3000);
	//関数ポインターを起動
	func(&a, &b);
}

void Compare(int *diceResult, int *playerGuess) {
	//サイコロの結果とプレイヤーの答えを比べる
	if (*diceResult % 2 == *playerGuess) {
		printf("正解, サイコロは%dでした。\n", *diceResult);
	} else {
		printf("不正解, サイコロは%dでした。\n", *diceResult);
	}
}

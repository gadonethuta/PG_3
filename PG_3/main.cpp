#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//敵クラス入れる
#include "Enemy.h"


int main() {
	//敵のインスタンスを作る
	Enemy *enemy_ = new Enemy();
	//敵の処理
	enemy_->Update();
	return 0;
}


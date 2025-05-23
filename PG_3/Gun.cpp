#include "Gun.h"
#include <stdio.h>

Gun::Gun() {
	printf("銃を準備しました。危なさそう！\n");
	damage_ = 9999;
}

Gun::~Gun() {
	printf("銃が壊れた？\n");
}

void Gun::Attack() {
	printf("銃を使って攻撃する！！！ダメージ%d！\n", damage_);
}

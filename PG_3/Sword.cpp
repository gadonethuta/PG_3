#include "Sword.h"
#include <stdio.h>

Sword::Sword() {
	printf("剣を準備しました。\n");
	damage_ = 10;
}

Sword::~Sword() {
	printf("剣が壊れた。\n");
}

void Sword::Attack() {
	printf("剣を使って攻撃する！！！ダメージ%d\n", damage_);
}

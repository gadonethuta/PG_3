#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "Sword.h"
#include "Gun.h"

int main() {
	//Weaponクラスでインスタンス３つ作る
	Weapon* weapon[3];

	//GunとSwordをインスタンス化する
	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			weapon[i] = new Gun();
		} else {
			weapon[i] = new Sword();
		}
	}

	//ポリモーフィズムを使って攻撃する
	for (int i = 0; i < 2; i++) {
		weapon[i]->Attack();
	}

	//ポリモーフィズムを使ってインスタンスを消す
	for (int i = 0; i < 2; i++) {
		delete weapon[i];
		//消した後にnullptr入れる
		weapon[i] = nullptr;
	}

	return 0;
}


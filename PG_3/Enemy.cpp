#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy() {
	//値代入
	currentState_ = EnemyState::APPROACH;
}

void Enemy::Approach() {
	printf("敵が近づきました！\n");
	//ステート変更
	currentState_ = EnemyState::ATTACK;
}

void Enemy::Attack() {
	printf("敵が攻撃しました！痛い！！！！\n");
	//ステート変更
	currentState_ = EnemyState::WITHDRAW;
}

void Enemy::Withdraw() {
	printf("コノヤロー逃げた！！！\n");
	//ステート変更
	currentState_ = EnemyState::APPROACH;
}

void Enemy::Update() {
	//メンバー関数ポインターの起動
	for (int i = 0; i < 3; i++) {
		(this->*pStateTable[static_cast<size_t>(currentState_)])();
	}
}

//メンバー関数ポインターテーブルの宣言
void (Enemy::* Enemy::pStateTable[])() {
	& Enemy::Approach,
	& Enemy::Attack,
	& Enemy::Withdraw
};
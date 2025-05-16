#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy() {
	currentState_ = EnemyState::APPROACH;
}

void Enemy::Approach() {
	printf("敵が近づきました！\n");
	currentState_ = EnemyState::ATTACK;
}

void Enemy::Attack() {
	printf("敵が攻撃しました！痛い！！！！\n");
	currentState_ = EnemyState::WITHDRAW;
}

void Enemy::Withdraw() {
	printf("コノヤロー逃げた！！！\n");
	currentState_ = EnemyState::APPROACH;
}

void Enemy::Update() {
	//(this->*pStateTable[0])();
	for (int i = 0; i < 3; i++) {
		(this->*pStateTable[static_cast<size_t>(currentState_)])();
	}
}

void (Enemy::* Enemy::pStateTable[])() {
	& Enemy::Approach,
	& Enemy::Attack,
	& Enemy::Withdraw
};
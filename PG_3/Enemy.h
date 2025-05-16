#pragma once

enum class EnemyState {
	APPROACH,
	ATTACK,
	WITHDRAW
};

class Enemy {
public:
	Enemy();

	void Approach();
	void Attack();
	void Withdraw();

	void Update();

private:
	EnemyState currentState_;
	static void (Enemy::* pStateTable[])();
};
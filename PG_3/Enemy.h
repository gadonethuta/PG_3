#pragma once

//敵のステートのeNum
enum class EnemyState {
	APPROACH,
	ATTACK,
	WITHDRAW
};

class Enemy {
public:
	//コンストラクター
	Enemy();
	//敵の処理
	void Update();

private:
	//敵の関数
	void Approach();
	void Attack();
	void Withdraw();

	//メンバー関数ポインターテーブル
	static void (Enemy::* pStateTable[])();

	//敵の今のステート
	EnemyState currentState_;
};
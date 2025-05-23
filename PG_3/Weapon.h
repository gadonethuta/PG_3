#pragma once

class Weapon {
public:
	Weapon();
	virtual ~Weapon();

	//攻撃する関数
	virtual void Attack();
protected:
	int damage_;
};
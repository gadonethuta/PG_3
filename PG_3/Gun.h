#pragma once
#include "Weapon.h"

class Gun : public Weapon {
public:
	Gun();
	~Gun() override;

	void Attack() override;
private:

};
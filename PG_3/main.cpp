#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "Enemy.h"


int main() {
	Enemy *enemy_ = new Enemy();
	enemy_->Update();
	return 0;
}


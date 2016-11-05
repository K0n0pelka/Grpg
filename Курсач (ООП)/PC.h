#pragma once
#include "Dynamic.h"
class PC :
	public Dynamic
{
private:
	int lvl;
	int exp;
	int gold;
	int unitCountMax;
	int dir;
	int speed;
public:
	void getExp();
	void checkLvlUp();
	void ChangeGold(int delta);
	Update(int time);
	PC();
	~PC();
};


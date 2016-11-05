#pragma once
#include "Dynamic.h"
#include "PC.h"
class NPC :
	public Dynamic
{
private:

public:
	void startDialog(PC *player);
	void startTrade(PC *player);
	NPC();
	~NPC();
};


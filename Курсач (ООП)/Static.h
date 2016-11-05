#pragma once
#include "Drawable.h"
class Static :
	public Drawable
{
protected:
	bool passable;
	bool vision;
public:
	Static();
	~Static();
};


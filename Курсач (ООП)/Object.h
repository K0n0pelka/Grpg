#pragma once
class Object
{
protected:
	int x, y;
	int h, w;
	unsigned int id;
public:
	virtual void Update(unsigned int time);
	/*virtual void SendMsg(Msg &m);*/
	virtual void collision(int x, int y, int h, int w);
	Object();
	~Object();
};


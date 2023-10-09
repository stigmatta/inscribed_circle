#pragma once
class Square
{
protected:
	float side_len;
public:
	Square();
	Square(float);
	float getSideLen();
	void setSideLen(float);
};

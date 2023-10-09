#pragma once
#include "Circle.h"
#include "Square.h"
class InscribedCircle:public Circle,public Square
{
private:
	bool canBeInscribed(float diameter, float side_len);
public:
	InscribedCircle()=default;
	InscribedCircle(float radius,float side_len);
};


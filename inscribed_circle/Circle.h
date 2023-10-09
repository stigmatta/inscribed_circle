#pragma once
class Circle
{
protected:
	float radius, diameter;
public:
	Circle();
	Circle(float);
	float getRadius();
	void setRadius(float);
	float getDiameter();
	void setDiameter(float);
};


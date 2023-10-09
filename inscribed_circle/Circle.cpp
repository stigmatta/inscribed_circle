#include "Circle.h"
Circle::Circle()
{
	radius = diameter = 0;
}
Circle::Circle(float radius)
{
	this->radius = radius;
	diameter = radius * 2;
}
float Circle::getRadius()
{
	return radius;
}
float Circle::getDiameter()
{
	return diameter;
}
void Circle::setDiameter(float diameter)
{
	this->diameter = diameter;
	radius = diameter / 2;
}
void Circle::setRadius(float radius)
{
	this->radius = radius;
	diameter = radius * 2;
}
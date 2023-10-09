#include "Square.h"
Square::Square()
{
	side_len = 0;
}
Square::Square(float side_len)
{
	this->side_len = side_len;
}
float Square::getSideLen()
{
	return side_len;
}
void Square::setSideLen(float side_len)
{
	this->side_len = side_len;
}
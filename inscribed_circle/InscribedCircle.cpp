#include "InscribedCircle.h"
#include <iostream>
using namespace std;
InscribedCircle::InscribedCircle(float diameter, float side_len)
{
	if (canBeInscribed(diameter, side_len))
	{
		cout << "This circle is inscribed in a square" << endl;
		this->diameter = diameter;
		radius = diameter / 2;
		this->side_len = side_len;
	}
	else
	{
		cout << "Your circle can`t be inscribed in a square. Data will be zeroed" << endl;
		this->diameter = this->side_len = 0;
	}
}
bool InscribedCircle::canBeInscribed(float diameter, float side_len)
{
	if (diameter <= side_len && diameter!=0 && side_len!=0)
		return true;
	return false;
}
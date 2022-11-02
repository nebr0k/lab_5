#include "Pair.h"

Pair::Pair( int x,  int y)
{
	
	this->x = x;
	
	this->y = y;	
}

Pair::Pair()
{
	
	this->x = 0;
	
	this->y = 0;
}



void Pair::setx(int x)
{
	this->x = x;
}

void Pair::sety(int)
{
	this->y = y;
}



int Pair::getx()
{
	return this->x;
}



int Pair::gety()
{
	return this->y;
}


ostream& operator<<(ostream& out, Pair& two)
{
	out << string("x: " + to_string(two.x)
		+ "\ny: " + to_string(two.y)+"\n");
	return out;
}

istream& operator>>(istream& in, Pair& two)
{
	cout << "x: "; in >> two.x;
	cout << "y: "; in >> two.y;
	return in;
}

double Pair::square() {
	return 1. * x * y;
}


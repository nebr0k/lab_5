#include "Rectangle.h"

Rectangle::Rectangle()
{
	this->two = Pair();
}

Rectangle::Rectangle(Pair two, int perimeter,int square)
{
	this->two = two;
	this->perimeter = perimeter;
}

Rectangle::Rectangle( int x, int y, int perimeter,int square)
{
	this->two = Pair( x, y);
	this->perimeter = x;
}

Pair Rectangle::getMan()
{
	return this->two;
}


void Rectangle::setP(int perimeter)
{
	this->perimeter = perimeter;
}

void Rectangle::setMan(Pair two)
{
	this->two = two;
}

ostream& operator<<(ostream& out, Rectangle& Rectangle)
{
	Rectangle.perimeter = Rectangle.perimeter1();
	Rectangle.square = Rectangle.square1();
	out << "square: " << Rectangle.square << "\n";
	out << Rectangle.two << "perimeter: " << Rectangle.perimeter<<"\n";
	return out;
}

istream& operator>>(istream& in , Rectangle& Rectangle)
{
	in >> Rectangle.two;
	cout << endl;
	return in;
}

int Rectangle::perimeter1() {
	return  (two.getx() + two.gety())*2;
}
int Rectangle::square1() {
	return  (two.getx() * two.gety());
}

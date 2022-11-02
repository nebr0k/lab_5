#pragma once
#include "Pair.h"
class Rectangle
{
private:
	Pair two;
	int perimeter;
	int square;
public:
	Rectangle();
	Rectangle(Pair, int,int);
	Rectangle( int,  int, int,int);

	Pair getMan();
	
	
	void setP(int);
	void setMan(Pair);
	int perimeter1();
	int square1();

	

	friend ostream& operator << (ostream&, Rectangle&);
	friend istream& operator >> (istream&, Rectangle&);
};


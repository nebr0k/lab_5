#pragma once
#include<iostream>
#include<string>
using namespace std;
class Pair
{
private:
	int x;
	int y;
	
public:
	Pair( int , int );
	Pair();
	
	void setx(int);
	void sety(int);

	
	int getx();
	int gety();
	double square();


	friend ostream& operator << (ostream&, Pair&);
	friend istream& operator >> (istream&, Pair&);
};


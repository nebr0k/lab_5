#include <iostream>
#include"Rectangle.h"
#include "Pair.h"

using namespace std;

int main()
{
	Pair a( 15, 10);
	cout << a;
	Rectangle st1(a, 50,150);
	cout << st1 << endl;
	cin >> st1;
	cout << st1 << endl;


}

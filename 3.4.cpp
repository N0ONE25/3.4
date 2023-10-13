// Lab_03_4.cpp
// < Зозюк Влад >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 8
#include <iostream>
using namespace std;
int main()
{
	double r;
	double x; // вхідний аргумент
	double y; // вхідний параметр
	
	cout << "R = "; cin >> r;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	
	// розгалуження в повній формі
	if (x*x + y*y <= r*r && !(x<= y && y <= -x) && -r <= y && y <= r && r >= x && x>= -r) 
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

// Lab_03_4.cpp
// < ����� ���� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 8
#include <iostream>
using namespace std;
int main()
{
	double R;
	double x; // ������� ��������
	double y; // ������� ��������
	
	
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if (!(x <= y && y <= -x) && (pow(y, 2) <= (pow(R, 2) - pow(x, 2))) || (-R <= x && x <= 0 && -R <= y && y <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
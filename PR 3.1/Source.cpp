// Lab_03_1.cpp
// < Polapa Maxim Olexandrovich >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 18

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 13.5 - 2 * x;
	//����� 1: ������������ � ��������� ����
	if (x < 0)
		B = sin(x);
	if (-1 < x && 1 > x)
		B = 1 - sin(x) * sin(x);
	if (x >= 1)
		B = cos(x) / (1 + sin(x) * sin(x));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x < 0)
		B = sin(x);
	else
		if (-1 < x && 1 > x)
			B = 1 - sin(x) * sin(x);
		else
			B = cos(x) / (1 + sin(x) * sin(x));
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}



